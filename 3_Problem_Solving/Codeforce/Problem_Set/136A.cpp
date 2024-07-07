#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

bool cmp(pair<int,int> x,pair<int,int> y){
    return x.second < y.second;
}

void solve(vector<pair<int,int>> vp){
    sort(vp.begin(), vp.end(), cmp);
    for (auto t:vp) {
        cout<<t.first<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> vp;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin>>x;
        vp.push_back({i,x});
    }
    solve(vp);

}