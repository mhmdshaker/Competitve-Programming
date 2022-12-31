#include <iostream>
using namespace std;
int main(){
    long long int t;
    long long int i=0;
    cin>>t;
    long long int n;
    while(i<t){
        cin>>n;
        if (n%2==0){
            cout<<n/2;
        }
        else{
            cout<<(n+1)/2;
        }
        cout<<"\n";
        i++;
    }

}