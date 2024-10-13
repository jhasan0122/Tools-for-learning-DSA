#include "iostream"
#include "vector"

using namespace std;

string solve(string str){
    int score=0;
    for (int i = 0; i < str.length(); ++i) {
        if(score==0 && str[i]=='h'){
            score++;
        }
        else if(score==1 && str[i]=='e'){
            score++;
        }
        else if(score==2 && str[i]=='l'){
            score++;
        }
        else if(score==3 && str[i]=='l'){
            score++;
        }
        else if(score==4 && str[i]=='o'){
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