#include "iostream"
#include "vector"

using namespace std;


string solve(string q,int n,int t){
    for (int i = 1; i <= t; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if(q[j]=='B' && q[j+1]=='G'){
                q[j] = 'G';
                q[j+1] = 'B';
                j++;
            }
        }
    }
    return q;
}

int main(){
    int n,t;
    cin>>n>>t;
    string q;
    cin>>q;
    cout<<solve(q,n,t);

}