#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

bool cmp(pair<int,int> x , pair<int,int> y){
    if(x.first == y.first){
        return x.second > y.second;
    }
    return x.first < y.first;
}

string solve(vector<pair<int,int>> arr,int s){
    sort(arr.begin(), arr.end(),cmp);
    for (int i = 0; i < arr.size(); ++i) {
        if(s <= arr[i].first){
            return "NO";
        }
        s += arr[i].second;
    }
    return "YES";
}

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; ++i) {
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    cout<<solve(arr,s);
}


