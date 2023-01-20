#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>> n;
    long long int x,y;
    long long int sumx=0, sumy=0;
    for (long long int o=0; o<2*n; o++){
        cin>>x>>y;
        sumx+=x;
        sumy+=y;
    }
    cout<<(sumx/n)<<" "<<(sumy/n);
}