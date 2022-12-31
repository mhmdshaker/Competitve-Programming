#include <iostream>
using namespace std;
int main(){
    int nums[5]={2,3,1,1,4};
    int n = 5;
        long long int dp [n];
        dp[0]=0;
        dp[1]=100;
        dp[2]=100;
        dp[3]=100;
        dp[4]=100;
        int i=0;
        int j;
        while(i<n){
            if (j==n){
                    break;
                }
            j=i+1;
            while(j<i+nums[i]+1){
                if (j==n){
                    break;
                }
                dp[j]=min(dp[i]+1,dp[j]);
                j++;
            }
            i++;

        }
        cout<<dp[0]<<" "<<dp[1]<<" "<<dp[2]<<" "<<dp[3]<<" "<<dp[4];
}

