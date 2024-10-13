#include "iostream"
#include "vector"
#include "math.h"
using namespace std;

string makeTailZero(string str){
    for (int i = 1; i < str.size(); ++i) {
        str[i] = '0';
    }
    return str;
}

void solve(int n){
    int digit = log10(n);
    if(digit == 0){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    vector<string > ans;
    string str = to_string(n);
    for (int i = 0; i < str.size(); ++i) {
        string sub = str.substr(i,digit-i+1);
        if(sub[0] != '0'){
            ans.push_back( makeTailZero(sub));
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        solve(n);
    }

}



