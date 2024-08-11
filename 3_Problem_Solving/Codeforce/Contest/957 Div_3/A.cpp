#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int solve(int a,int b,int c){
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    sort(arr.begin(), arr.end());
    int minA=arr[0];
    int minB=arr[1];
    int maxi = 1;
    for (int i = 1; i <= 4; ++i) {
        maxi = max(maxi,(minA+i) * (minB+(5-i)));
    }
    return maxi*arr[2];
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<endl;
    }

}