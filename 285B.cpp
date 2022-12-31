#include <iostream>
using namespace std;
int main(){
    int n, s, t;
    cin>>n>>s>>t;
    int counter=0;
    int p[n];
    int x=s;
    bool ans=false;
    for(int i = 0; i<n; i++){
        cin>>p[i];
    }
    if (s==t){
        cout<<0;
    }
    else{
        while(x!=t){
            counter++;
            if (p[x-1]==-1){
                cout<<-1;
                ans=true;
                break;
            }
            int var=x;  
            x=p[x-1];  
            p[var-1]=-1;  
        }
        if (!ans){
            cout<<counter;
        }
        }
    }
