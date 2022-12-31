#include <iostream>
using namespace std;
int main(){
int m;
int n;
cin>>n;
int input[n];
int x;
cin>>x;
int dp[x+1];
int i=0;
while(i<x+1){
    dp[i]=-1;
    i++;
}
dp[0]=0;
i=0;
while(i<n){
    cin>>m;
    input[i]=m;
    i++;
}
i=0;
int min;
bool answer=false;
while(i<x+1){
    min=0;
    int j=1;
    while(j<n+1){
        if (i-j>=0){
            if (min>dp[i-j]){
                min=min+1;
            }
        }
        j++;
    }
    dp[i]=min;
    i++;
}

i=0;
while(i<x+1){
    cout<<dp[i]<<" ";
    i++;
}

}