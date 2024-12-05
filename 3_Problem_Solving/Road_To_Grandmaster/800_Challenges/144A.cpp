#include "iostream"
#include "vector"

using namespace std;

void minMax(int &min,int &mini,int &max,int &maxi,vector<int> arr){
    min = INT_MAX;
    mini= -1;
    max = INT_MIN;
    maxi = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i] <= min){
            min = arr[i];
            mini = i;
        }
        if(arr[i] > max){
            max = arr[i];
            maxi = i;
        }
    }
}

int solve(vector<int> arr){
    int min,mini,max,maxi;
    minMax(min,mini,max,maxi,arr);

    int n = arr.size();
    if(maxi == mini){
        return 0;
    }
     if(maxi > mini){
        return maxi + (n-1-mini) - 1;
    }
    return maxi + (n-1-mini);

}

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for (int i = 0; i < t; ++i) {
        cin>>arr[i];
    }
    cout<<solve(arr);

}


