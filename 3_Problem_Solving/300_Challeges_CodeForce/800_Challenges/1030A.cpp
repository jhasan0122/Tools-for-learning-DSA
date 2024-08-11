#include "iostream"
#include "vector"

using namespace std;

string solve(int n,int *arr){
    for (int i = 0; i < n; ++i) {
        if(arr[i]==1){
            return "HARD";
        }
    }
    return "EASY";
}

int main(){
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; ++i) {
        cin>>arr[i];
    }
    cout<<solve(t,arr);

}