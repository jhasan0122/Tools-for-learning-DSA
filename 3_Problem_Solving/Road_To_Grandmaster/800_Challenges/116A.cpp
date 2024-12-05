#include "iostream"
#include "vector"

using namespace std;

int solve(int n,int arr[][2]){
    for (int i = 1; i < n; ++i) {
        arr[i][1] += (arr[i-1][1] - arr[i][0]);
    }
    int maxi = arr[0][1];
    for (int i = 0; i < n; ++i) {
        maxi = max(maxi,arr[i][1]);
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin>>arr[i][j];
        }
    }
    cout<<solve(n,arr);

}