#include "iostream"
#include "vector"

using namespace std;

string solve(int n,int m){
    int points = n * m;
    int step = 1;
    while (points>0){
        points -= (n+m-1);
        n--;
        m--;
        step++;
    }
    if(step % 2==0){
        return "Akshat";
    }
    return "Malvika";
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);


}


