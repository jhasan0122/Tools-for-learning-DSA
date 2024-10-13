#include "iostream"
#include "vector"

using namespace std;

int solve(int n){
    if(n&1){
        return n/2;
    }
    return (n-1)/2;
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


