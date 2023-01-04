#include <iostream>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int digits=0;
    long long int i=1;
    long long int count=0;
    string s = to_string(n);
    while(true){
        if (9 * pow(10,i-1)<=n){
            digits+= i*9 * pow(10,i-1);
            count=count+9*pow(10,i-1);
            i++;
        }
        else{
            break;
        }
    }
    long long int x= (n-count) * s.length();
    digits+=x;
    cout<<digits;
}


