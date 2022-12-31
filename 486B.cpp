#include <iostream>
using namespace std;
int main(){
    int m, n; //m=nb of rows, n=nb of cols
    cin>>m>>n;
    bool ans=false;
    int matrix [m][n];
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    int rows[m+1];
    int cols[n+1];
    for(int i=0; i<m+1; i++){
        rows[i]=0;
    }
    for(int i=0; i<n+1; i++){
        cols[i]=0;
    }
    //fill the rows array
    for(int i=0;i<m; i++){
        ans=false;
        for (int j=0; j<n;j++){
            if (matrix[i][j]==0){
                rows[i]=0;
                ans=true;
                break;
            }
        }
        if (ans!=true){
            rows[i]=1;
        }
        
    }
    //fill the cols array
    for(int i=0;i<n; i++){
        ans=false;
        for (int j=0; j<m;j++){
            if (matrix[i][j]==0){
                cols[i]=0;
                ans=true;
                break;
            }
        }
        if (ans!=true){
            cols[i]=1;
        }
        
    }
    //check if a row contains zero and one
    bool firstans=true;
    for(int i=0; i<m; i++){
        if (firstans){
        for (int j=0; j<n; j++){
            if (matrix[i][j]==1){
                if (rows[i]==0 && cols[j]==0){
                    firstans=false;
                    break;
                }
            }
        }
        }
        else{break;}
    }

    

    if (firstans==true){

    int output [m][n];

    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            output[i][j]=0;
        }
    }

    for(int i=0; i<m; i++){
        if (rows[i]==1){
            for(int j=0; j<n; j++){
                if (cols[j]==1){
                    output[i][j]=1;
                }
            }
        }
    }
    cout<<"YES"<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<output[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO";
    }
    
}