#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

bool checkAll(vector<int> arr){
    sort(arr.begin(), arr.end());
    if(arr[0] != 0){
        return false;
    }
    int last = arr.size() - 1;
    if(arr[last] != 25){
        return false;
    }
    for (int i = 0; i < arr.size()-1; ++i) {
        if(arr[i+1] - arr[i] > 1){
            return false;
        }
    }
    return true;
}

string solve(string str){
    if(str.length() < 26){
        return "NO";
    }
    vector<int> arr;
    for (int i = 0; i < str.size(); ++i) {
        if(str[i]>='a' && str[i]<='z') {
            arr.push_back(str[i] - 97);
        }
        else{
            arr.push_back(str[i] - 65);
        }
    }
    if(checkAll(arr)){
        return "YES";
    }
    return "NO";
}

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    cout<<solve(str);
}


