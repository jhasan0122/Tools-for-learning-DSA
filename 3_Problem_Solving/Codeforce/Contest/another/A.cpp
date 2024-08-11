#include "iostream"
#include "vector"

using namespace std;

int solve(string str,int n){
    vector<int> frq(4,0);
    for (int i = 0; i < str.size(); ++i) {
        if(str[i] != '?'){
            frq[str[i]-65]++;
        }
    }
    int marks = 0;
    for (int i = 0; i < 4; ++i) {
        if(frq[i] >= n){
            marks += n;
        }
        else{
            marks += frq[i];
        }
    }
    return marks;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<solve(str,n)<<endl;
    }


}


