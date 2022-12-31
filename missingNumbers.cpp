#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    int miss[n];
    int i=0;
    while(i<n){
        miss[i]=-1;
        i=i+1;
    }
    i=1;
    while (i<n){
        cin>>x;
        miss[x-1]=x;
        i=i+1;
    }
    int j=0;
    while(j<n){
        if (miss[j]==-1){
            cout<<j+1;
            break;
        }
        j=j+1;
    }
    return 0;
}