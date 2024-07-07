#include "iostream"
#include "vector"
using namespace std;

int solve(vector<int>& prices,bool buy,int index) {

    if(index >= prices.size()){
        return 0;
    }

    int profit = 0;
    if(buy){                           // if we have permission to buy the product
        int include = -prices[index] + solve(prices, false,index+1);  //we can buy -> no buy permission that day
        int exclude = 0 + solve(prices, true,index+1);                // or not -> buy permission is ok
        profit = max(include,exclude);
    }
    else{
        int include = prices[index] + solve(prices, true,index+1);  //if no buy - we can sell the product -> buy permission is ok
        int exclude = 0 + solve(prices, false,index+1);              // or not to sell -> we cant buy more
        profit = max(include,exclude);
    }
    return profit;
}
int maxProfit(vector<int>& prices) {
    return solve(prices, true,0);
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout<<maxProfit(prices);

}