#include "iostream"

using namespace std;

int solve(int n){
    int sum=0,i=0;
    while (sum <= n){
        if(i%2==0){
            sum -= ((2*i)+1);
        }
        else{
            sum -= ((2*i)+1);
        }
        i++;
    }
    return sum;
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