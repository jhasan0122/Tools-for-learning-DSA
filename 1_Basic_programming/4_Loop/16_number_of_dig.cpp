#include "iostream"
#include "math.h"

using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    while (n){
        n /= 10;
       count++;
    }
    cout<<count<<endl;
}