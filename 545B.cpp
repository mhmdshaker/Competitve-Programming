#include <iostream>
using namespace std;
#include <vector>
template<class C, typename T>
bool contains(C& c, T t) {
    return std::find(std::begin(c), std::end(c), t) != std::end(c);
};
int main(){
    long long int fromOne=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    bool diff [s1.length()];
    for(long long i=0; i<s1.length();i++){
        diff[i]=false;
    }
    long long int nbOfDiff=0;
    for (long long int i=0; i<s1.length(); i++){
        if (s1[i]!=s2[i]){
            diff[i]=true;
            nbOfDiff+=1;
        }
    }
    int fromtwo=0;
    int both=0;
    if (nbOfDiff%2!=0){
        cout<<"impossible";
    }
    else{
        for(int i=0; i<s1.length();i++){
            if (diff[i]==true){
                if (fromOne<nbOfDiff/2){
                    cout<<s1[i];
                    fromOne+=1;
                }
                else{
                    fromtwo+=1;
                    cout<<s2[i];
                }
            }
            else{
                cout<<s1[i];
                both+=1;
            }
        }
    }
}