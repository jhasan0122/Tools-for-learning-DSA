#include "iostream"
#include "vector"

using namespace std;

int solve(int n,int a,int b,int c,vector<int> &dp){
    if(n < 0){
        return INT_MIN;
    }
    if(n == 0 ){
        return 0;
    }
    if(dp[n]  != -1){
        return dp[n];
    }
    int cutByA = 1 + solve(n-a,a,b,c,dp);
    int cutByB = 1 + solve(n-b,a,b,c,dp);
    int cutByC = 1 + solve(n-c,a,b,c,dp);
    return dp[n] = max(cutByA,max(cutByB,cutByC));
}

int cutting(int n,int a,int b,int c){
    vector<int> dp(n+1,-1);
    int ans = solve(n,a,b,c,dp);
    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<cutting(n,a,b,c);

}


