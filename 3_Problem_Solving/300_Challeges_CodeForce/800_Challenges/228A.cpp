#include "iostream"
#include "vector"

using namespace std;

int solve(vector<int> shoeColors){
    int count= 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = i+1; j < 4; ++j) {
            if(shoeColors[i] == shoeColors[j]){
                shoeColors[j] = -1;
            }
        }
    }
    for (int i = 0; i < shoeColors.size(); ++i) {
        if(shoeColors[i] == -1){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> shoeColors(4);
    for (int i = 0; i < 4; ++i) {
        cin>>shoeColors[i];
    }
    cout<<solve(shoeColors);
}


