#include "iostream"
#include "vector"

using namespace std;

string solve(vector<pair<int,int>> time,int n,int s,int m){
    int maxi = time[0].first;
    if(maxi >= s){
        return "YES";
    }
    for (int i = 0; i < time.size()-1; ++i) {
        int inter = time[i+1].first - time[i].second;
        if(inter >= s){
            return "YES";
        }
    }
    if(m - time[n-1].second >= s){
        return "YES";
    }
    return "NO";
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>> time(n);
        for (int j = 0; j < n; ++j) {
            cin>>time[j].first;
            cin>>time[j].second;
        }
        cout<<solve(time,n,s,m)<<endl;
    }


}


