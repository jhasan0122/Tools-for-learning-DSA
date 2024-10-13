#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int>& nums,int start,int end,vector<int> &dp){
    if(start >= end){
        return 0;
    }
    if(dp[start] != -1){
        return dp[start];
    }
    int include = nums[start] + solve(nums,start+2,end,dp);     //if take the number skip index+1 and jump to the index+2
    int exclude = 0 + solve(nums,start+1,end,dp);           //if not take index+1 th number
    return dp[start] = max(include,exclude);
}

int rob(vector<int>& nums) {
    int n=nums.size();
    vector<int> dp(n+1,-1);
    int firstToSecLast = solve(nums,0,n,dp);        //from 0th to nth houses
    int secToLast = solve(nums,1,n-1,dp);           //from 1st to n-1 th houses
    return max(firstToSecLast,secToLast);
}

int main(){
    vector<int> nums = {2, 7, 9, 3, 1};
    cout<<rob(nums);
}