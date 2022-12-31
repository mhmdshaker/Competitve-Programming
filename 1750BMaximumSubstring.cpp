#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    for (ll j=0; j<t; j++){
        ll n;
        string s;
        ll x=0;
        ll y=0;
        ll xcons=0;
        ll ycons=0;
        ll maxX=0;
        ll maxY=0;
        cin>>n;
        cin>>s;
        for (ll i=0; i<n; i++){
            if (s[i]=='1'){
                x+=1;          
                xcons+=1;
                ycons=0;
                if (xcons>maxX){
                    maxX=xcons;
                }
            }
            else{
                y+=1;       
                ycons+=1;
                xcons=0;
                if (ycons>maxY){
                    maxY=ycons;
                }
            }
        }
        long long int one=maxX*maxX;
        long long int two=maxY*maxY;
        long long int three=x*y;
        if (one>two & one>three){
            cout<<one;
        }
        else if (two>one & two>three){
            cout<<two;
        }
        else{
            cout<<three;
        }
        cout<<"\n";
    }
}