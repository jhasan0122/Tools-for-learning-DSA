#include "iostream"
#include "vector"

using namespace std;

string solve(int n){
    string speech = "I hate it";
    string ans = speech;

    if(n == 1){
        return speech;
    }
    int s = 0;

    for (int i = 1; i < n; ++i) {
        s = ans.length();
        ans = ans.substr(0,s-2);
        if(i%2 == 0){
            ans += "that I hate it";
        }
        else{
            ans += "that I love it";
        }

    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);

}


