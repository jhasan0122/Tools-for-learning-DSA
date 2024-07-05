#include "iostream"
#include "vector"
#define MOD 1000000000007

using namespace std;

long long formula(int a, long long n,int d){
    long  long x = ((2*a + ((n-1)*d)%MOD)*n)%MOD/2;
    return x%MOD;
}

long long solve(long long n){
    if(n%2==0){
        return (formula(-1,n/2,-2)%MOD + formula(2,n/2,2)%MOD)%MOD;
    }
    else{
        return (formula(-1,n/2+1,-2) + formula(2,n/2,2))%MOD;
    }
}

int main(){
    long long n;
    cin>>n;
    cout<<solve(n);
//00000

}