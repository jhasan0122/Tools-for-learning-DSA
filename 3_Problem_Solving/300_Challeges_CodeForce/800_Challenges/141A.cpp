#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;


string solve(string sub1,string sub2,string main){

    if(sub1.size() + sub2.size() != main.size()){
        return "NO";
    }

    vector<int> sub;
    for (int i = 0; i < sub1.size(); ++i) {
        sub.push_back((int )sub1[i]);
    }
    for (int i = 0; i < sub2.size(); ++i) {
        sub.push_back((int )sub2[i]);
    }
    vector<int> mainArr;

    for (int i = 0; i < main.size(); ++i) {
        mainArr.push_back((int )main[i]);
    }
    sort(mainArr.begin(), mainArr.end());
    sort(sub.begin(), sub.end());

    for (int i = 0; i < sub.size(); ++i) {
        if(sub[i] != mainArr[i]){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    string sub1,sub2,main;
    cin>>sub1>>sub2>>main;
    cout<<solve(sub1,sub2,main);

}


