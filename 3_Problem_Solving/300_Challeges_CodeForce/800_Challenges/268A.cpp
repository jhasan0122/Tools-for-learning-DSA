#include "iostream"
#include "vector"

using namespace std;

int solve(vector<vector<int>> arr){
    int count=0;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr.size(); ++j) {
            if(i==j){
                continue;
            }
            if(arr[i][0]==arr[j][1]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    vector<vector<int>> arr(t,vector<int>(2));
    for (int i = 0; i < t; ++i) {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    cout<<solve(arr);

}


