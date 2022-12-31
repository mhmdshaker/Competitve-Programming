#include <iostream>
using namespace std;
int main(){
    int n;
    int t;
    cin>>n>>t;
    int x;
    int i=0;
    int arr[n];
    while(i<n){
        cin>>x;
        arr[i]=x;
        i++;
    }
    int initial [n];
    copy (arr, arr+n, initial);
    sort(arr,arr+n);
    int l=0;
    int r=n-1;
    int sum=arr[0]+arr[n-1];
    bool ans=false;
    while(l!=r){
        if (sum==t){
            cout<<indexOf(initial,l)+1<<" "<<r+1;
            ans=true;
            break;
        }
        if (sum>t){
            r--;
            sum=arr[r]+arr[l];
        }
        else if (sum<t){
            l++;
            sum=arr[r]+arr[l];
        }
    }
    if (!ans){
        cout<<"IMPOSSIBLE";
    }
}