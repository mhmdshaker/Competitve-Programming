#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int j;
    int y;
    bool loop=false;
    bool ans=false;
    int x = (int)s[s.length()-1] - 48;
    for (int i = 0; i<s.length(); i++){
        if ((((int)s[i] - 48)%2==0) && (int)s[i] - 48 <x){
            cout<<s.substr(0,i)<<x<<s.substr(i+1,s.length()-i-2)<<s[i];
            ans=true;
            loop=true;
            break;
        }
        else if (((((int)s[i] -48)%2==0) && (int)s[i] - 48 >x)){
            y = (int) s[i] -48;
            j = i;
            ans=true;
        }
    }
    if (!ans){
        cout<<-1;
    }
    else if (!loop){
        cout<<s.substr(0,j)<<x<<s.substr(j+1,s.length()-j-2)<<y;
    }
}