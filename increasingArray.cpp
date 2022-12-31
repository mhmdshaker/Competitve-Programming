#include <iostream>
#include <string>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int i=0;
    long long int x;
    while(i<n){
        cin>>x;
        arr[i]=x;
        i=i+1;
    }
    i=1;
    long long int max=0;
    while(i<n){
        
        if (arr[i-1]>arr[i]){
            max=max+arr[i-1]-arr[i];
        
        arr[i]=arr[i-1];
        }
        i=i+1;
    }
    cout<<max;
}