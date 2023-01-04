#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector <vector<long long int> > v(367) ;

    for (long long int i=1; i<=366; i++){
        v[i]=vector <long long int> (2);
        v[i][0]=0; // 0 for males
        v[i][1]=0; // 1 for females
    }
    char gender;
    long long int a, b;
    for (long long int i=0; i<n; i++){
        cin>>gender>>a>>b;
        if (gender=='M'){
            for (long long int j=1; j<=366; j++){
                if (a<=j & j<=b){
                    v[j][0]+=1;
                }
            }
        }
        else{
            for (long long int j=1; j<=366; j++){
                if (a<=j & j<=b){
                    v[j][1]+=1;
                }
            }
        }
    }
    long long int maxmin=0;
    for (long long int i=1; i<=366; i++){
        if (min(v[i][0],v[i][1])>maxmin){
            maxmin=min(v[i][0],v[i][1]);
        }
    }
    cout<<maxmin*2;
}