#include <iostream>
using namespace std;
#include <math.h>
int main(){
    long long int t;
    cin>>t;
    long long int n;
    for(long long int i=0; i<t; i++){
        cin>>n;
        long long int f=pow(10,9)+7;
        long long int x=(((n%f)*((n+1)%f)%f)*((((2*n+1))/3)%f))%f + (((n-1))*(n)/2)%f - ((n)*(n))%f;
        
        x=(x*2022)%f;
        cout<<x<<'\n';
    }
}