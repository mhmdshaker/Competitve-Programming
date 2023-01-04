#include <iostream>
using namespace std;




int main(){
    int n, m, q;
    cin>>n>>m>>q;
    int arrr[n][m];
    int mem[n];
    int z;
    for (int i=0; i<n; i++){
        mem[i]=0;
    }
    for (int i=0; i<n; i++){
        int max=0;
        int total=0;
        for (int j=0; j<m; j++){
            cin>>z;
            arrr[i][j]=z;
            if (arrr[i][j]==1){
                max+=1;
                if (max>total){
                    total=max;
                }
            }
            else{
                max=0;
            }
        }
        mem[i]=total;
    }

    int x, y;
    for(int i=0; i<q; i++){
        cin>>x>>y;
        x=x-1;
        y=y-1;
        if (arrr[x][y]==1){
            arrr[x][y]=0;
            int var=0;
            int max=0;
            for (int e=0; e<m; e++){
                if (arrr[x][e]==1){
                    var+=1;
                    if (var>max){
                        max=var;
                    }
                }
                else{
                    var=0;
                }
            }
            mem[x]=max;
        }
        else{
            arrr[x][y]=1;
            int var=0;
            int max=0;
            for (int e=0; e<m; e++){
                if (arrr[x][e]==1){
                    var+=1;
                    if (var>max){
                        max=var;
                    }
                }
                else{
                    var=0;
                }
            }
            mem[x]=max;
        }

        int max=0;
        for (int j=0; j<n; j++){
            if (max<mem[j]){
                max=mem[j];
            }
        }
        cout<<max<<endl;
    }
}