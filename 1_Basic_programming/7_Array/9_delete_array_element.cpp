#include "iostream"

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int pos;
    cin>>pos;
    for (int i = pos; i < n; ++i) {
        arr[i] = arr[i+1];
    }
    n--;
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}