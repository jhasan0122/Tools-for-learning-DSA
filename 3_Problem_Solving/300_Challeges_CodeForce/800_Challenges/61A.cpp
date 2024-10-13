#include "iostream"
#include "vector"

using namespace std;

string solve(string first,string second){
    string ans = "";
    for (int i = 0; i < first.length(); ++i) {
        if(first[i] == second[i]){
            ans += '0';
        }
        else{
            ans += '1';
        }
    }
    return ans;
}

int main(){
    string first,second;
    cin>>first>>second;
    cout<<solve(first,second);
}


