#include <iostream>
using namespace std;
int main(){
    long long int counter=0;
    string s;
    cin>>s;
    long long int n = s.length();
    long long int a [n];
    for(long long int i=0; i<n; i++){
        a[i]=0;
    }
    a[0]=0;
    for(long long int i=0; i<n-5;i++){
        if (i!=0){
            a[i]=a[i-1];
        }
        if (s.substr(i,5)=="heavy"){
            a[i]+=1;
        }
    }

    for(long long int i=0; i<5; i++){
        a[n-1-i]=a[n-6];
    }

    for(long long int i=n-1; i>4;i--){
        if (s.substr(i-4,5)=="metal"){
            counter+=a[i];
        }
    }

    
     
    cout<<counter;
}