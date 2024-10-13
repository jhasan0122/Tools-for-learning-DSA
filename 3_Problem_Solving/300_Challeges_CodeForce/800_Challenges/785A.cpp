#include "iostream"
#include "vector"

using namespace std;

int solve(vector<string> arr){
    int sum=0;
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i] == "Tetrahedron"){
            sum += 4;
        }
        else if(arr[i] == "Cube"){
            sum += 6;
        }
        else if(arr[i] == "Octahedron"){
            sum += 8;
        }
        else if(arr[i] == "Dodecahedron"){
            sum += 12;
        }
        else if(arr[i] == "Icosahedron"){
            sum += 20;
        }
    }
    return sum;
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


