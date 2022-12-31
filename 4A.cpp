#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if (n%2==1){
        cout<<"NO";
    }
    else{
        if (n==2){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
}