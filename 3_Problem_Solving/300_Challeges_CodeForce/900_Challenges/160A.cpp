#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int solve(vector<int> coins,int sum){
    sort(coins.begin(), coins.end(),greater<int>());
    int target = 0,count=0;
    for (int i = 0; i < coins.size(); ++i) {
        target += coins[i];
        count++;
        if(target > sum/2){
            return count;
        }
    }
}

int main(){
    int n,sum=0;
    cin>>n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin>>coins[i];
        sum+=coins[i];
    }
    cout<<solve(coins,sum);

}