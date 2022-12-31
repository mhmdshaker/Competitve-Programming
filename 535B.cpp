#include <iostream>
#include <math.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int out=0;
    for (int i = 0; i<s.length(); i++){
        if (s[i]=='4'){
            out=out+pow(2,s.length()-1-i);
        }
        else{
            out=out+pow(2,s.length()-i);
        }
    }
    cout<<out;
}

