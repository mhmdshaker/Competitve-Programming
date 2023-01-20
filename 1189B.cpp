#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int n;
    bool ans=false;
    cin>>n;
    vector <long long int> v;
    long long int x;
    for (long long int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (v[0]+v[n-2]<=v[n-1]){
        for (long long int i=0; i<n-2; i++){
            if (v[i]+v[n-2]>v[n-1]){
                v.insert(v.begin(),v[i]);
                v.erase(v.begin()+i+1);
                ans=true;
                break;
            }
        }
    }
    else{
        ans=true;
    }
    if (ans){
        cout<<"YES"<<endl;
        for (long long int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<"NO";
    }
}