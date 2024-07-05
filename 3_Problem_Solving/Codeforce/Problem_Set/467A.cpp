#include "iostream"
#include "vector"

using namespace std;

int solve(int n,int arr[][2]){
    int count=0;
    for (int i = 0; i < n; ++i) {
        if(arr[i][1] - arr[i][0] >= 2){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    int arr[t][2];
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin>>arr[i][j];
        }
    }
    cout<<solve(t,arr);

}