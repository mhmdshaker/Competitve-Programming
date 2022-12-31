#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i=0;
    int n;
    while(i<t){
        cin>>n;
        int j=1;
        int x;
        cin>>x;
        int y;
        while(j<n){
            cin>>y;
            j++;
        }
        if (x==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
        i++;
    }
}