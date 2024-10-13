#include "iostream"
#include "vector"

using namespace std;

string solve(string str){
    string ans = "";
    int n = str.length() ;
    bool flag = false;
    for (int i = 0; i <n; ++i) {
        if(i==n-1 || i==n-2){
            if(str[i-3]=='W' && str[i-2]=='U' && str[i-1]=='B') {
                ans += ' ';
                ans += str[i];
            }
            else{
                ans += str[i];
            }
            flag = true;
            continue;
        }
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            flag = true;
            continue;
        }
        if(flag){
            ans += ' ';
            flag = false;
        }

        ans += str[i];
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);
}


