#include "iostream"
#include "vector"
using namespace std;

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));

    for (int index = n-1; index >=0 ; --index) {
        for (int buyMode = 0; buyMode <= 1; ++buyMode) {
            for (int limit = 1; limit <= 2; ++limit) {
                int profit = 0;
                if(buyMode){
                    int include = -prices[index] + dp[index+1][0][limit];       //time for buy: if buy :: money lost
                    int exclude = 0 + dp[index+1][1][limit];                        //not buy
                    profit = max(include,exclude);
                }
                else{
                    int include = prices[index] +dp[index+1][1][limit-1];      //time for sell: if sell :: get money (if sell limit--)
                    int exclude = 0 + dp[index+1][0][limit];                             //not sell
                    profit = max(include,exclude);
                }
                dp[index][buyMode][limit] = profit;
            }
        }
    }


    return dp[0][1][2];
}

int main(){
    vector<int> prices = {3,3,5,0,0,3,1,4};
    cout<<maxProfit(prices);
}