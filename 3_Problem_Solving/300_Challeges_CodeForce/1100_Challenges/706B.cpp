#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

void solve(vector<int> pricesShop,vector<int> dayPrice){
    sort(pricesShop.begin(), pricesShop.end());
    for (int i = 0; i < dayPrice.size(); ++i) {
        vector<int>::iterator upValue = upper_bound(pricesShop.begin(), pricesShop.end(),dayPrice[i]);
        cout<<upValue - pricesShop.begin()<<" ";
    }
}

int main(){
    int n,q;
    cin>>n;
    vector<int> pricesShop(n);
    for (int i = 0; i < n; ++i) {
        cin>>pricesShop[i];
    }
    cin>>q;
    vector<int> dayPrice(q);
    for (int i = 0; i < q; ++i) {
        cin>>dayPrice[i];
    }
    solve(pricesShop,dayPrice);


}

