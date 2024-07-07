#include "iostream"
#include "vector"
using namespace std;

int solve(vector<int>& prices,int buy,int index,vector<vector<int>> &dp) {

    if(index >= prices.size()){
        return 0;
    }

    if(dp[index][buy] != -1){
        return dp[index][buy];
    }
    int profit = 0;
    if(buy){                           // if we have permission to buy the product
        int include = -prices[index] + solve(prices, 0,index+1,dp);  //we can buy -> no buy permission that day
        int exclude = 0 + solve(prices, 1,index+1,dp);                // or not -> buy permission is ok
        profit = max(include,exclude);
    }
    else{
        int include = prices[index] + solve(prices, 1,index+1,dp);  //if no buy - we can sell the product -> buy permission is ok
        int exclude = 0 + solve(prices, 0,index+1,dp);              // or not to sell -> we cant buy more
        profit = max(include,exclude);
    }
    return dp[index][buy] =  profit;
}
int maxProfit(vector<int>& prices) {
    int n= prices.size();
    vector<vector<int>> dp(n+1,vector<int>(2,-1));
    return solve(prices, true,0,dp);
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout<<maxProfit(prices);

}