#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int doOp(int n){
    return (2*n - 1);
}

int solve(int n,int k,vector<int> arr){
    sort(arr.begin(), arr.end());
    int sumOp = 0;
    for (int i = 0; i < k-1; ++i) {
        sumOp += doOp(arr[i]);
    }
    return sumOp;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        vector<int> arr(k);
        for (int j = 0; j < k; ++j) {
            cin>>arr[j];
        }
        cout<<solve(n,k,arr)<<endl;
    }

}