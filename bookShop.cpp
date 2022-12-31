#include <iostream>
using namespace std;
int f(int money, int nbBooks, int * books, int * dp){
    if (nbBooks==0){
        return 0;
    }
    if ((money - books[nbBooks-1]<=0) and dp[money][&nbBooks-1]!=-1){
        return books[nbBooks];
    }
    else{
        dp[money][&nbBooks]=max(f(money-books[nbBooks-1], nbBooks-2, books, dp), f(money, nbBooks-1, books, dp));
        return dp[money][&nbBooks];
    }

}

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int i=0;
    int k;
    int books[n];
    while(i<n){
        cin>>k;
        books[i]=k;
        i++;
    }
    int dp[x+1][n+1];
    i=0;
    while(i<x+1){
        dp[0][i]=0;
        i++;
    }
    i=0;
    while(i<n+1){
        dp[i][0]=0;
        i++;
    }
    i=1;
    int j=1;
    while(i<x+1){
        while(j<n+1){
            dp[i][j]=-1;
        }
    }
    cout<<f(x,n,books,dp[n+1]);
}