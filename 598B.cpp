#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long int m;
    cin>>m;
    long long int l, r, k;
    vector <char> v;
    for (long long int i=0; i<s.length(); i++){ 
        v.insert(v.begin()+i,s[i]);
    } 

    for (long long int i=0; i<m; i++){
        
        cin>>l>>r>>k;
        k=k%(r-l+1);
        for (long long int j=0; j<k; j++){
            v.insert(v.begin()+l-1, v[r-1]);
            v.erase(v.begin()+r);
        }
    }
    for (long long int i=0; i<s.length(); i++){
        cout<<v[i];
    }
}