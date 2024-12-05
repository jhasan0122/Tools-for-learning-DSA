#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int> arr){
    int sum=0,count=0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
        if(sum < 0){
            count++;
            sum = 0;
        }
    }
    return count;
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


