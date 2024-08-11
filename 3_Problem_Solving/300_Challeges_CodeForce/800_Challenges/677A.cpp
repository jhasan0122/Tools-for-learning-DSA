#include "iostream"
#include "vector"

using namespace std;

int solve(int n,int *arr,int h){
    int width = 0;
    for (int i = 0; i < n; ++i) {
        if(arr[i] > h){
            width+=2;
        }
        else{
            width++;
        }
    }
    return width;
}

int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<<solve(n,arr,h);

}