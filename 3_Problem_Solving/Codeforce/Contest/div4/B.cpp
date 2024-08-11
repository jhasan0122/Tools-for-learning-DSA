#include "iostream"
#include "vector"

using namespace std;

int solve(int a1,int a2,int b1,int b2){
    int count = 0;
    if(a1>b1 && a2>b2){
        count+=2;
    }
    if(a1>b2 && a2>b1){
        count+=2;
    }
    return count;

}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        cout<<solve(a1,a2,b1,b2)<<endl;
    }

}


