#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int minMaxDiff(vector<int> &arr,int start,int end){
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = start; i <= end; ++i) {
        if(arr[i]<mini){
            mini = arr[i];
        }
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi - mini;
}

int solve(vector<int> &arr,int n){
    sort(arr.begin(), arr.end());
    int mini = INT_MAX;
    for (int i = 0; i < arr.size() - n+1; ++i) {
        mini = min(mini, minMaxDiff(arr,i,i+n-1));
    }
    return mini;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);

    for (int i = 0; i < m; ++i) {
        cin>>arr[i];
    }
    cout<<solve(arr,n);

}


