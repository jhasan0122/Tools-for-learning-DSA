#include "iostream"
#include "vector"

using namespace std;

string solve( vector<string> arr){
    string team1 = arr[0],team2 = "";
    int goal1 = 1,goal2=0;
    for (int i = 1; i < arr.size(); ++i) {
        if(arr[i] != team1){
            team2 = arr[i];
            goal2++;
        }
        else{
            goal1++;
        }
    }
    if(goal1 > goal2){
        return team1;
    }
    return team2;

}

int main(){
    int t;
    cin>>t;
    vector<string> arr(t);
    for (int i = 0; i < t; ++i) {
        cin>>arr[i];
    }
    cout<<solve(arr);

}


