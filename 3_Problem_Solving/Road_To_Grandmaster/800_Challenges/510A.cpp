#include "iostream"
#include "vector"

using namespace std;

void solve(int n,int m){
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if(i%2 != 0){
                cout<<"#";
                continue;
            }
            if(i%4 == 0 && j==1){
                cout<<"#";
            }
            else if(i%4 != 0 && j==m){
                cout<<"#";
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    solve(n,m);


}


