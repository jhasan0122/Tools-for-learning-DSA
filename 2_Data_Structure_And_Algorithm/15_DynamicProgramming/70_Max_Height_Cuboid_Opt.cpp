#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

bool check(vector<int> base,vector<int> newBox){
    return (base[0] >= newBox[0]) && (base[1] >= newBox[1]) && (base[2] >= newBox[2]);
}

int maxHeight(vector<vector<int>>& cuboids) {
    for (auto &eachBox:cuboids) {
        sort(eachBox.begin(), eachBox.end());
    }
    sort(cuboids.begin(), cuboids.end());
    int n= cuboids.size();
    vector<int> currVec(n+1,0);
    vector<int> nextVec(n+1,0);

    for (int curr = n-1; curr >=0 ; --curr) {
        for (int prev = curr-1; prev >=-1 ; --prev) {
            int include = 0;
            if(prev==-1 || check(cuboids[curr],cuboids[prev])){
                include = cuboids[curr][2] + nextVec[curr+1];
            }
            int exclude = 0 + nextVec[prev+1];
            currVec[prev+1] = max(include,exclude);
        }
        nextVec = currVec;
    }
    return nextVec[0];
}

int main(){
    vector<vector<int>> cuboids = {{36, 46,  41},
                                   {15, 100, 100},
                                   {75, 91,  59},
                                   {13, 82,  64}};
    cout<<maxHeight(cuboids);
}