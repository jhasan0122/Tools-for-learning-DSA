#include "iostream"


using namespace std;
int main(){
    string str,word;
    getline(cin,str);
    getline(cin,word);
    int idk=0,k=0;
    for (int i = 0; i < str.length()-word.length(); ++i) {
        int check=0;
        for (int j = 0; j < word.length(); ++j) {
            if(str[i+j]!=word[j]){
                check=1;
                break;
            }
        }
        if(check==0){
            idk=i;
        }
    }
    for (int i = 0; i < str.length(); ++i) {
        if(i==idk){
            for (k = i; k < str.length()-word.length(); ++k) {
                str[k]=str[k+word.length()];
            }
            str[k]='\0';
        }
    }
    k=0;
    while (str[k]){
        cout<<str[k];
        k++;
    }
}