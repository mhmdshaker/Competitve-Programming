#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool ans=false;
    int n = s.length();
    for (int i=1; i<n; i++){
        if (int(s[i])>96){
            cout<<s;
            ans=true;
            break;
        }
    }
    if (!ans){
        if (int(s[0])<97){
            cout<<char(int(s[0])+32);
        }
        else{
            cout<<char(int(s[0])-32);
        }
        for (int i=1; i<n; i++){
            cout<<char(int(s[i])+32);
        }
    }
}