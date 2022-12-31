#include <iostream>
using namespace std;
int main(){
    long long int n;
    long long int energy=0;
    long long int cost=0;
    cin>>n;
    long long int a[n+1];
    a[0]=0;
    for(long long int i=1; i<n+1; i++){
        cin>>a[i];
    }
    for(long long int i=0; i<n; i++){
        if (energy+a[i]-a[i+1]<0){
            cost=cost-(energy+a[i]-a[i+1]);
            energy=0;
        }
        else{
            energy=energy+a[i]-a[i+1];
        }
    }
    
    cout<<cost;

}