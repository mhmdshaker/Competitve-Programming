#include <iostream>
using namespace std;
int main(){
    long long int count=0;
    long long int n;
    cin>>n;
    if ((n*(n+1))%4==0){
        long long int target;
        target=n*(n+1)/4;
        cout<<"YES"<<"\n";
        if (n%2==0){
            long long int i=0;
            cout<<n/2<<"\n";
            while(i<n/2 and count<n){
                count=count+1;
                cout<<i+1<<" "<<n-i<<" ";  
                i=i+2;
            }
            i=1;
            cout<<"\n"<<n/2<<"\n";
            while(i<n/2 and count<n){
                count=count+1;
                cout<<i+1<<" "<<n-i<<" ";
                i=i+2;
            }
        }
        else{
            long long int i=0;
            cout<<n/2+1<<"\n";
            while(i<=(n-1)/2){
                cout<<i+1<<" "<<n-1-i<<" ";
                i=i+2;
            }
            i=0;
            cout<<"\n"<<n/2<<"\n";
            while(i<(n-1)/2-1){
                cout<<i+2<<" "<<n-1-i-1<<" ";
                i=i+2;
            }
            cout<<n;
        }
    }
    else {
        cout<<"NO"<<"\n";
    }
        

}