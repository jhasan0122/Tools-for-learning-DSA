#include "iostream"
#include "vector"

using namespace std;

int solve(int noOfdays,int m,int oneDayCost,int mDayCost){
    if(noOfdays < 0){
        return 0;
    }
    if(oneDayCost == 0){
        return 0;
    }
    int oneDayPassBuy = oneDayCost + solve(noOfdays -1,m,oneDayCost,mDayCost);
    int mDayPassBuy = mDayCost + solve(noOfdays - m,m,oneDayCost,mDayCost);
    return min(oneDayPassBuy,mDayPassBuy);
}

int mCost(int noOfdays,int m,int oneDayCost,int mDayCost){
    return solve(noOfdays,m,oneDayCost,mDayCost);
}

int main(){
    int noOfdays, m, oneDayCost, mDayCost;
    cin>>noOfdays>>m>>oneDayCost>>mDayCost;
    cout<<mCost(noOfdays,m,oneDayCost,mDayCost);



}


