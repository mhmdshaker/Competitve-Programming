#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double n, m, a;
    cin>>n>>m>>a;
    long long int needed=0;
    if (n<=a){
        if (m<=a){
            needed=needed;
        }
        else{
            needed=ceil(m/a);
        }
    }
    else{
        needed=needed+ceil(n/a);
        if (m<=a){
            needed=needed;
        }
        else{
            needed=needed*ceil(m/a);
        }
    }
    if (needed==0){
        cout<<1;
    }
    else{
        cout<<needed;
    }
}