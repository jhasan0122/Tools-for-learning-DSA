#include "iostream"
#include "vector"

using namespace std;

string addNumber(pair<string,int> data){
    if(data.second == 0){
        return "OK";
    }
    string temp = data.first + to_string(data.second);
    return temp;
}

int checkStorage(vector<pair<string,int>> &storage,string find){
    int n = storage.size() - 1;
    for (int i = n; i >= 0 ; --i) {
        if(storage[i].first == find){
            return storage[i].second + 1;
        }
    }
    return 0;
}

void solve(vector<string> arr){
    vector<pair<string,int>> storage;

    for (int i = 0; i < arr.size(); ++i) {
        int index = checkStorage(storage,arr[i]);
        storage.push_back({arr[i],index});
        cout<<addNumber({arr[i],index})<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    vector<string> arr(t);
    for (int i = 0; i < t; ++i) {
        cin>>arr[i];
    }
    solve(arr);



}


