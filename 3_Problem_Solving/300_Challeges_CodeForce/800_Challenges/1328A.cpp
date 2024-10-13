#include "iostream"
#include "vector"

using namespace std;

int solve(int a,int b){
    if(a%b == 0){
        return 0;
    }
    return ((a/b +1)*b) - a;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }

}

