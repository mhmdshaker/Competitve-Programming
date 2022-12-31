#include <iostream>
using namespace std;
long long int f(long long int n,long long int * arr){
    if (arr[n-1]!=-1){
        return arr[n-1];
    }
    if (n<=6){
        long long int i=1;
        long long int current=0;
        while(i<n){
            current=current+f(i,arr);
            i=i+1;
        }
        arr[n-1]=(current+1)%(1000000000+7);
        return arr[n-1];
    }
    else{
        long long int i=n-6;
        long long int current=0;
        while(i<n){
            current=current+f(i,arr);
            i=i+1;
        }
        arr[n-1]=current%(1000000000+7);
        return arr[n-1];
    }


}
int main(){
    long long int n;
    cin>>n;
    long long int arr[n+1];
    long long int i=0;
    while(i<n+1){
        arr[i]=-1;
        i=i+1;
    }
    arr[0]=1;
    cout<<f(n,arr);
}