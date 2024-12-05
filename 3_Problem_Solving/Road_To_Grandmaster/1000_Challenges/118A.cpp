#include "iostream"
#include "vector"

using namespace std;

bool isVowel(char c){
    if(c=='a' || c=='e'|| c=='o'|| c=='i'|| c=='u'|| c=='y'){
        return true;
    }
    return false;
}

string solve(string str){
    string ans= "";
    for (int i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);
        if(isVowel(str[i]));
        else{
            ans += ".";
            ans += str[i];
        }
    }
    return ans;

}

int main(){
    string str;
    cin>>str;
    cout<<solve(str);

}