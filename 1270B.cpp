#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    for (long long int i=0; i<t; i++){
        long long int n;
        cin>>n;
        long long int x;
        long long int arr [n];
        for (long long int j=0; j<n; j++){
            cin>>x;
            arr[j]=x;
        }

        bool ans=false;
        long long int j;
        for (j=1; j<n; j++){
            if (abs(arr[j-1]-arr[j])>1){
                ans=true;
                break;
            }
        }

        if (ans){
            cout<<"YES"<<endl;
            cout<<j<<" "<<j+1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}