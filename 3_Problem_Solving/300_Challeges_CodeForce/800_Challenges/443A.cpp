#include "iostream"
#include "vector"

using namespace std;



int solve(string str){
    vector<int> freq(26,0);
    for (int i = 0; i < str.size(); ++i) {
        if(str[i]>='a' && str[i]<='z'){
            freq[str[i] - 97] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) {
        count += freq[i];
    }
    return count;
}

int main(){
    string str;
    getline(cin,str);
    cout<<solve(str);
}


