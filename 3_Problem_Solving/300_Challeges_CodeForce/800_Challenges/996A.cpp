#include "iostream"
#include "vector"

using namespace std;

int solve(int n){
    int noOfBill = 0;
    noOfBill+= n/100;
    n = n%100;
    noOfBill+= n/20;
    n = n%20;
    noOfBill+= n/10;
    n = n%10;
    noOfBill+= n/5;
    n = n%5;
    noOfBill+= n;
    return noOfBill;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);

}


