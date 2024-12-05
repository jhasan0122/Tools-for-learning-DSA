#include "iostream"
#include "vector"

using namespace std;

bool checkDistinct(int yr){
    int first = yr /1000;
    int sec = (yr /100)%10;
    int thir = (yr /10)%10;
    int fourth = yr%10 ;
    if(first==sec || first==thir || first==fourth ||sec==thir || sec==fourth || thir==fourth){
        return false;
    }
    return true;
}

int solve(int yr){
    for (int y = yr+1; y<=50000 ; ++y) {
        if(checkDistinct(y)){
            return y;
        }
    }
    return -1;
}

int main(){
    int y;
    cin>>y;
    cout<<solve(y);
}