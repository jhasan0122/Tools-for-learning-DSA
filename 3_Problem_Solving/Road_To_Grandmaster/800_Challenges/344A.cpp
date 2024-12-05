#include "iostream"
#include "vector"

using namespace std;

int solve(vector<string> &magnets){
    int count=1;
    for (int i = 1; i < magnets.size(); ++i) {
        if(magnets[i] != magnets[i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    vector<string> magnets(t);
    for (int i = 0; i < t; ++i) {
        cin>>magnets[i];
    }
    cout<<solve(magnets);
}