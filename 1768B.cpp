#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    for (long long int j=0; j<t; j++){
        long long int n, k;
        cin>>n>>k;        
        long long int arr [n];
        long long int x;
        for (long long int i=0; i<n; i++){
            cin>>x;
            arr[i]=x;
        }
        long long int c=1;
        for (long long int i=0; i<n; i++){
            if (arr[i]==c){
                c=c+1;
            }
            
        }
        c=c-1;
        if ((n-c)%k!=0){
            cout<<(n-c)/k + 1<<endl;
        }
        else{
            cout<<(n-c)/k<<endl; 
        }

    }

}