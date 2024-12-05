#include "iostream"
#include "vector"
using namespace std;

int solve(int x,int y,int z){
    int mini = min(x,min(y,z));
    int maxi = max(x,max(y,z));
    int another=0;
    if(x!=mini && x!=maxi){
        another = x;
    }
    else if(y!=mini && y!=maxi){
        another = y;
    }
    else if(z!=mini && z!=maxi){
        another = z;
    }
    int var = INT_MAX;
    for (int i = mini; i <= maxi ; ++i) {
        int dist = abs(i-mini) + abs(i-another) + abs(i-maxi);
        var = min(var,dist);
    }
    return var;
}


int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<solve(x,y,z);
}