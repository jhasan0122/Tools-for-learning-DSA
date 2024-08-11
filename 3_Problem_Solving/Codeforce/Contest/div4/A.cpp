#include "iostream"


using namespace std;

int solve(int n){
    return n%10 + n/10;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }

}


