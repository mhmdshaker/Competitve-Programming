#include <bits/stdc++.h>
using namespace std;
int main(){
    
    


    int grid [3][3]={{1,3,1},{1,5,1},{4,2,1}};
    int i=1;
    int j=0;
    int m=sizeof(grid[0])/4;
    int n=sizeof(grid)/(4*m);
    int arr[n][m];
    arr[0][0]=1;
    while(i<n){
        //cout<<grid[i][0];
        arr[i][0]=arr[i-1][0]+grid[i][0];
        i++;
    }
    i=1;
    while(i<m){
        arr[0][i]=grid[0][i]+arr[0][i-1];
        i++;
    }
    i=1;
    j=1;
    while(i<n){
        j=1;
        while(j<m){
            arr[i][j]=min(arr[i-1][j],arr[i][j-1])+grid[i][j];
            j++;
        }
        i++;
    }
    //cout<<arr[n-1][m-1];



    i=0;
    j=0;
    while(i<n){
        //cout<<i<<" ";
        j=0;
        while(j<m){
        cout<<arr[i][j]<<" ";
        j++;
        }
        i++;
    }
}