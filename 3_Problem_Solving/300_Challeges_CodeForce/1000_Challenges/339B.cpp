
#include "iostream"
#include "vector"

using namespace std;

int shortDist(int from,int to,int limit){
    if(from <= to){
        return to - from;
    }
    return limit - from + to;
}

long long solve(int limit,vector<int> houses){
    long long sum = 0;
    houses.insert(houses.begin(),1);
    for (int i = 0; i < houses.size()-1; ++i) {
        sum += shortDist(houses[i],houses[i+1],limit);
    }
    return sum;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for (int i = 0; i < m; ++i) {
        cin>>arr[i];
    }
    cout<<solve(n,arr);
//    cout<<shortDist(1,3,4);

}


