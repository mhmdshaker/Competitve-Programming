#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int i=0;
    while(i<t){
        long long int y, x;
        cin>>y>>x;
        if (y>x){
            if (y%2==0){
                cout<<y*y+1-x<<"\n";
            }
            else{
                cout<<(y-1)*(y-1)+x<<"\n";
            }
        }
        else{
            if (x%2==1){
                cout<<x*x+1-y<<"\n";
            }
            else{
                cout<<(x-1)*(x-1)+y<<"\n";
            }
        }
        i++;
    }
}