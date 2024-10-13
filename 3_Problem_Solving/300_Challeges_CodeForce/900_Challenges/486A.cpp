#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void solve(vector<int> arr){
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i) {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    solve(arr);

}


