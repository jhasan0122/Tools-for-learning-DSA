#include "iostream"
#include "vector"
#include "string"

using namespace std;

int lastSecondDigitRemove(int n){
    string str = to_string(n);
    int size = str.size();
    string sub = str.substr(0,size-2);
    string ans = sub + str[size-1];
    n = stoi(ans);
    return n;
}

int solve(int n){
    if(n>=0){
        return n;
    }
    return max(n/10, lastSecondDigitRemove(n));
}

int main(){
    int t;
    cin>>t;
    cout<<solve(t);
}


