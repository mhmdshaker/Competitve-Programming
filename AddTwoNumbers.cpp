#include <bits/stdc++.h>
using namespace std;
int main(){
    string l1;
    string l2;
    cin>>l1;
    cin>>l2;
    int n1=l1.size();
    int n2=l2.size();
    int i=1;
    int sum1=0;
    int j=0;
    while(i<n1-1){
        sum1=sum1+int(l1[i])*pow(10,j);
        i=i+2;
        j=j+1;
    }
    i=0;
    j=0;
    while(i<n2-1){
        sum1=sum1+int(l2[i])*pow(10,j);
        i=i+2;
        j=j+1;
    }
    string x=to_string(sum1);
    int n=x.size();
    i=0;
    cout<<"[";
    while(i<n){
        cout<<x[i]<<",";
        i++;
    }
    cout<<"]";
}
 