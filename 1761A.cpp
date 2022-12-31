#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    for (long long int p=0; p<t; p++){
        
        int n;
        int a;
        int b;
        cin>>n>>a>>b;
        if (n==1){
            cout<<"YES";
        }
        else{
            if (a+b<=n-2){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        cout<<"\n";
    }
}