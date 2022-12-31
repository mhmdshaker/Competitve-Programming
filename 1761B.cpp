#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int p=0; p<t;p++){
        int n;
        cin>>n;
        int arr[n];
        int x;
        int var1=-1, var2=-1, var3=-1;
       for (int i=0; i<n; i++){
            cin>>x;
            arr[i]=x;
       }
            if (n==1 || n==2){
            cout<< n;
        }
        else{
            for (int i = 0; i<n; i++){
            if (var1==-1){
                if (arr[i]!=var2 & arr[i]!=var3){
                    var1=arr[i];
                }
            }
            else if (var2==-1){
                if (arr[i]!=var1 & arr[i]!=var3){
                    var2=arr[i];
                }
            }
            else if (var3==-1){
                if (arr[i]!=var1 & arr[i]!=var2){
                    var3=arr[i];
                }
            }
            }
        
        if ( var1==-1 || var2==-1 || var3==-1){
            cout<<(n/2) + 1;
        }
        else{
            cout<<n;
        }
        }
        
        cout<<"\n";
    }
    }
