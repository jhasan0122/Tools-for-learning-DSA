#include "iostream"
#include "vector"

using namespace std;

long long solve(long long n,long long k){
   long long inclusiveMid = (n-1)/2;
   k--;
   if(k <= inclusiveMid){
       return 2*k +1;
   }
    return 2*(k-inclusiveMid);

}

int main(){
    long long n,k;
    cin>>n>>k;
    cout<<solve(n,k);

}


