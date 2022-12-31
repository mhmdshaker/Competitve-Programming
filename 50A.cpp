#include <iostream>
using namespace std;
int main(){
        long long int n, m;
        cin>>n>>m;
        if (n==1 && m==1){
            cout<<0;
        }
        else{
        if (n%2==0){
            cout<<(n/2)*m;
        }
        else if (m%2==0){
            cout<<(m/2)*n;
        }
        else{
            cout<<((n-1)/2)*m+(m/2);
        }
        }
    }