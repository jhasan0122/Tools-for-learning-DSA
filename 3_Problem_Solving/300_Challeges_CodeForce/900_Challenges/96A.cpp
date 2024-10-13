#include "iostream"
#include "vector"

using namespace std;

bool dangerous(string player){
    char one = player[0];
    for (int i = 1; i < player.length(); ++i) {
        if(one != player[i]){
            return false;
        }
    }
    return true;
}

string solve(string football){
    if(football.length() <7){
        return "NO";
    }
    for (int i = 0; i < football.length()-6; ++i) {
        string subStr=football.substr(i,7);
        if(dangerous(subStr)){
            return "YES";
        }
    }
    return "NO";
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);

}