#include "iostream"
#include "vector"

using namespace std;

int solve(int n,vector<int> &arr){
    int micro = arr[0];
    int mega = arr[0];
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if(arr[i] > mega || arr[i] < micro){
            count++;
        }
        micro = min(micro,arr[i]);
        mega = max(mega,arr[i]);
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<solve(n,arr);

}