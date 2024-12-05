#include "iostream"
#include "vector"

using namespace std;

double solve(vector<int> drinks){
    int n = drinks.size();
    double totalOrangeJuice = 0;
    for (int i = 0; i < drinks.size(); ++i) {
        totalOrangeJuice += drinks[i];
    }
    return totalOrangeJuice / n;

}

int main(){
    int n;
    cin>>n;
    vector<int> drinks(n);
    for (int i = 0; i < n; ++i) {
        cin>>drinks[i];
    }
    cout<<solve(drinks);

}
