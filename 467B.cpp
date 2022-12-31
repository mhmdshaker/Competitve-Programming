#include <iostream>
#include <bitset>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n, m, k;
    int limit=0;
    vector<string> a(m+1);
    int x;
    int friends=0;
    bool ans=true;
    cin>>n>>m>>k;
    for (int i=0; i<m+1; i++){
        cin>>x;
        string s =  (bitset<20>(x)).to_string();
        a[i] = s;
    }
    for (int i=0; i<m; i++){
        limit=0;
        ans=true;
        for(int j=0; j<20; j++){
            if (limit>k){
                ans=false;
                break;
            }
            else{
                if (a[i][j]!=a[m][j]){
                    limit+=1;
                }
            }
        }
        if (ans){
            friends+=1;
        }
    }
    cout<<friends;
}