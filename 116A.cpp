#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int max=0;
    long long int now=0;
    long long int a,b;
    for (long long int i=0; i<t; i++){
        cin>>a>>b;
        now=now+b-a;
        if (now>max){
            max=now;
        }
    }
    cout<<max;
}