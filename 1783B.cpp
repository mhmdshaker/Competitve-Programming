#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int e=0; e<t; e++){
        int n;
        cin>>n;
        int arr[n*n];
        int counter=1;
        for (int i=0; i<n*n; i+=2){
            arr[i]=counter;
            counter++;
        }
        counter=n*n;
        for(int i=1;i<n*n;i+=2){
            arr[i]=counter;
            counter--;
        }
        int var=0;



            while (var<n*n){
                for (int i=0; i<n; i++){
                cout<<arr[i+var]<<" ";
                }
            cout<<endl;
            var=var+n;
                if (n%2==1 & var>=n*n){break;}
                    for (int i=0; i<n; i++){
                        cout<<arr[var+n-1-i]<<" ";
                    }
                cout<<endl;
                var=var+n;
                }
            
            
        


    }
}