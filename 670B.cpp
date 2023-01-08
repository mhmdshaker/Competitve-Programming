#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    int x;
    for (int j=0; j<n; j++){
        cin>>x;
        arr[j]=x;
    }
    int i=0;
    int nb=1;
    while(nb<=k){
        nb+=i;
        i+=1;
    }
    nb-=i-1;
    cout<<arr[k-nb];
}