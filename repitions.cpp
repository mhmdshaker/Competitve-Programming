#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    cin>>x;
    long long int n;
    long long int max=0;
    n=x.length();
    long long int i=0;
    long long int a=0;
    long long int c=0;
    long long int g=0;
    long long int t=0;
    while(i<n){
        
        if (x[i]=='A'){
            c=0;
            g=0;
            t=0;
            a=a+1;
            if (a>max){
                max=a;
            }
        }
        else if (x[i]=='C'){
            a=0;
            g=0;
            t=0;
            c=c+1;
            if (c>max){
                max=c;
                
            }
        }
        else if(x[i]=='G'){
            a=0;
            c=0;
            t=0;
            g=g+1;
            if (g>max){
                max=g;
            }
        }
        else{
            a=0;
            c=0;
            g=0;
            t=t+1;
            if (max<t){
                max=t;
            }
        }
        i=i+1;
    }
    cout<<max;

    return 0;
}