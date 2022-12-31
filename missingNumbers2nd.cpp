#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
int i=0;
int x;
int full=0;
while(i<n+1){
    full=full+i;
    i=i+1;
}
i=0;
while(i<n-1){
    cin>>x;
    sum=sum+x;
    i=i+1;
}
cout<<full-sum;
return 0;
}