#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    for (long long int i=0; i<t; i++){
        long long int n;
        cin>>n;
        if (n%2==0){
            for (int i=1; i<=n; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
        }
        else{
            cout<<1<<" ";
            for (int i=2; i<n; i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
        }
        cout<<endl;
    }
}