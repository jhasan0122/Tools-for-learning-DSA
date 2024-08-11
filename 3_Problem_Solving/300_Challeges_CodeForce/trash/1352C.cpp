#include "iostream"
#include "vector"

using namespace std;

int solve(int start,int end,int n){
    if(start > end){
        return 0;
    }
    int sum =(int)end/n - (int)start/n +1;

//    cout<<sum<<endl;
    return sum + solve(end+1,end+sum,n);
}

int solve2(int n,int k){
    int div = k/n;
    return k + div + solve(k+1,k+div,n);
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;
        cin>>n>>k;
        cout<<solve2(n,k)<<endl;
    }
//cout<<solve2(4 ,12);


}


