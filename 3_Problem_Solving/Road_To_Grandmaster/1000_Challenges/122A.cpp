#include "iostream"
#include "vector"

using namespace std;

bool checkLucky(int n){
    while (n){
        int dig=n%10;
        if(dig!=4 && dig!=7){
            return false;
        }
        n/=10;
    }
    return true;
}

string solve(int n){
    for (int i = 2; i < n; ++i) {
        if(checkLucky(n)){
            return "YES";
        }
        else if(n%i==0 && checkLucky(i)){
            return "YES";
        }
    }
    return "NO";
}

int main(){
    int t;
    cin>>t;
    cout<<solve(t);


}