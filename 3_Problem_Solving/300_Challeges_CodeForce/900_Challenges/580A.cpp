#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int> arr){
    int n = arr.size();
    int maxLen =1;
    int len = 1;
    for (int i = 0; i < n-1; ++i) {
        if(arr[i] > arr[i+1]){
            len = 1;
        }
        else{
            len++;
        }
        maxLen = max(maxLen, len);
    }
    return maxLen;
}

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for (int i = 0; i < t; ++i) {
        cin>>arr[i];
    }
    cout<<solve(arr);

}


