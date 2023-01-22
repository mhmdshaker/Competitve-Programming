#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    for (long long int o=0; o<t; o++){
        long long int n;
        cin>>n;
        long long int x;
        long long int arr [n];
        for (long long int i=0; i<n; i++){
            cin>>x;
            arr[i]=x;
        }
        int parity; //0=even, 1=false
        parity=arr[0]%2;
        long long int op=0;
        for (long long int i=1; i<n; i++){
            if (arr[i]%2==parity){
                op+=1;
            }
            else{
                if (parity==0){
                    parity=1;
                }
                else{
                    parity=0;
                }
            }
        }
        cout<<op<<endl;
    }
}