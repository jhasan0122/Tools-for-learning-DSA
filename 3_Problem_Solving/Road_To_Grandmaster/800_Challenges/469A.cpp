#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

bool checkAll(vector<int> arr,int n){
    sort(arr.begin(), arr.end());
    if(arr[0] != 1){
        return false;
    }
    int last = arr.size() - 1;
    if(arr[last] != n){
        return false;
    }
    for (int i = 0; i < arr.size()-1; ++i) {
        if(arr[i+1] - arr[i] > 1){
            return false;
        }
    }
    return true;
}

string solve(vector<int> first,vector<int> second,int n){
    for(auto x:second){
        first.push_back(x);
    }
    if(checkAll(first,n)){
        return "I become the guy.";
    }
    return "Oh, my keyboard!";
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> first(x);
    for (int i = 0; i < x; ++i) {
        cin>>first[i];
    }
    int y;
    cin>>y;
    vector<int> second(y);
    for (int i = 0; i < y; ++i) {
        cin>>second[i];
    }
    if(x==0 && y==0){
        cout<<"Oh, my keyboard!";
    } else{
        cout<<solve(first,second,n);
    }


}


