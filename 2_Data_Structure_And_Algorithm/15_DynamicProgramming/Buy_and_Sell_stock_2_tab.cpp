#include "iostream"
#include "vector"
using namespace std;


int maxProfit(vector<int>& prices) {
    int n= prices.size();
    vector<vector<int>> dp(n+1,vector<int>(2,0));

    for (int index = n-1; index >= 0 ; --index) {
        for (int buy = 0; buy <= 1; ++buy) {
            int profit = 0;
            if(buy){                           // if we have permission to buy the product
                int include = -prices[index] + dp[index+1][0];  //we can buy -> no buy permission that day
                int exclude = 0 + dp[index+1][1];                // or not -> buy permission is ok
                profit = max(include,exclude);
            }
            else{
                int include = prices[index] + dp[index+1][1];  //if no buy - we can sell the product -> buy permission is ok
                int exclude = 0 + dp[index+1][0];              // or not to sell -> we cant buy more
                profit = max(include,exclude);
            }
            dp[index][buy] =  profit;
        }
    }

    return dp[0][1];
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout<<maxProfit(prices);

}