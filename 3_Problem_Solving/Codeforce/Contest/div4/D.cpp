#include "iostream"
#include "vector"

using namespace std;

bool equalStr(string sub,string sub2){
    for (int i = 0; i < sub.size(); ++i) {
        if(sub[i] == '?'){
            continue;
        }
        if(sub[i] != sub2[i]){
            return false;
        }
    }
    return true;
}

string solve(string subString,string main){
    int subSize = subString.size();
    for (int i = 0; i < main.size()-subSize+1; ++i) {
        string mainSub = main.substr(i,subSize);
        if(equalStr(subString,mainSub)){
            return mainSub;
        }
    }
    return "NO";
}

int main(){
//    int t;
//    cin>>t;
//    for (int i = 0; i < t; ++i) {
//
//    }
    cout<<solve("paiu",
    "mom");
//    cout<<equalStr("ab??e","abcde");
}


