#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int solve(int a,int b,int c){
    int a1 = (a * b) + c;
    int a5 = a * (b + c);
    int a2 = (a + b) * c;
    int a6 = a + (b * c);
    int a3 = a+b+c;
    int a4 = a * b * c;
    return max(a1,max(a2,max(a3,max(a4,max(a5,a6)))));
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solve(a,b,c);


}


