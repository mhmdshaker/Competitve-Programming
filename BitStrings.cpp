#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int i=0;
    long long int prod=1;
    while(i<n){
        prod=(prod%(1000000000+7))*2%(1000000000+7);
        i=i+1;
    }
    cout<<prod;
}