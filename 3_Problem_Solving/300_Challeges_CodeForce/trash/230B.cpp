#include "iostream"
#include "vector"
#include "math.h"

using namespace std;

string solve(long x){
    long count = 2;
    for (long i = 2; i <= sqrt(x); ++i) {
        if(x%i == 0){
//            cout<<"("<<i<<")"<<endl;
            count++;
        }
        if(count > 3){
//            cout<<"("<<i<<")"<<endl;
            return "NO";
        }
    }
    if(count == 3){
        return "YES";
    }
    return "NO";
}

int main(){
    int t;
    cin>>t;
    vector<long> arr(t);
    for (int i = 0; i < t; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < t; ++i) {
        cout<<solve(arr[i])<<endl;
    }

}


