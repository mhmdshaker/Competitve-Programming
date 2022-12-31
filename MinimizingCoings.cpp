#include <bits/stdc++.h>
using namespace std;

 long long int f( long long int n, long long int * dp, long long int sum, long long  int * coins){
    if (dp[sum]<21474836 and sum>=0){
        
        return dp[sum];
    }
    else if(sum<0){
        
      
        return 21474836;
    }
    else{
        
         long long int j=0;
         long long int minimum=21474836;
         long long int minx=21474836;
        while(j<n-1){
           
            minimum=min(f(n,dp,sum-coins[j],coins),f(n,dp,sum-coins[j+1],coins))+1;   
            if (minimum<minx){
                minx=minimum;
            } 
            j=j+1;
        }   
        if (sum>=0){
                dp[sum]=minx;
        }
            return minx;
        
    }
}
int main(){
     long long int n;
    cin>>n;
     long long int sum;
    cin>>sum;
     long long int x;
     long long int dp[sum+1];
     long long int coins [n];
     long long  int i=0;
    while(i<n){
        cin>>x;
        coins[i]=x;
        i=i+1;
    }
    i=0;
    while(i<sum+1){
        dp[i]=21474836;
        i=i+1;
    }
    dp[0]=0;
    if (n==1 and coins[0]==1){
        cout<<sum;
    }
    else if (n==1 and sum%coins[0]==0){
        cout<<sum/coins[0];
    }
    else{
    if (f(n, dp, sum, coins)<21474836){
        cout<<dp[sum];
    }
    else{
        cout<<-1;
    }
    }
}