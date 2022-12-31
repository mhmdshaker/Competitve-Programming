#include <iostream>
using namespace std;
int main(){
    long long int n;
    long long int t;
    cin>>t;
    long long int x;
    long long int sum=1;
    for(long long int j=0; j<t; j++){
        sum=1;
        cin>>n;
    for(long long int i=0; i<n; i++){
        cin>>x;
        sum=sum*x;
    }
    cout<<(sum+(n-1))*2022<<endl;
    }
}