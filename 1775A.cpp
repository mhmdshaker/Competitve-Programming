#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    for (long long int j=0; j<t; j++){
        string s;
        cin>>s;
        bool ans=false;
        for (long long int i=1; i<s.length()-1; i++){
            if (s[i]=='a'){
                for (long long int k=0; k<i; k++){
                    cout<<s[k];
                }
                cout<<" "<<s[i]<<" ";
                for (long long int k=i+1; k<s.length(); k++){
                    cout<<s[k];
                }
                ans=true;
                break;
            }
        }
            if (!ans){
                cout<<s[0]<<" ";
                for (long long int i=1; i<s.length()-1; i++){
                    cout<<s[i];
                }
                cout<<" "<<s[s.length()-1];
            }
        
        cout<<endl;
    }
}