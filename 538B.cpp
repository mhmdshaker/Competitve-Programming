#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<class C, typename T>
bool contains(C& c, T t) {
    return std::find(std::begin(c), std::end(c), t) != std::end(c);
};

int main(){
    long long int D[65]={0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000, 100001, 100010, 100011, 100100, 100101, 100110, 100111, 101000, 101001, 101010, 101011, 101100, 101101, 101110, 101111, 110000, 110001, 110010, 110011, 110100, 110101, 110110, 110111, 111000, 111001, 111010, 111011, 111100, 111101, 111110, 111111, 1000000};
    long long int n;
    cin>>n;
    vector<vector<long long int> > best (n+1);
    long long int dp [n+1];
    if (contains(D,n)==true){
        cout<<1<<endl;
        cout<<n;
        }
    else{
        for (long long int i=0; i<n+1; i++){
            dp[i]=10000000; //inf
        }
        dp[0]=0;
        vector <long long int> one;
        one.push_back(1);
        vector <long long int> zero;
        zero.push_back(0);
        best[0]=zero;
        best[1]=one;
        vector <long long int> var;
        var.push_back(1);
        for (long long int i=1; i<n+1; i++){

            if (contains(D,i)==true){
                dp[i]=1;
                var.pop_back();
                var.push_back(i);
                best[i]=var;
            }
            
            for (long long int j=1; j<65; j++){
                if (i+D[j]<n+1){
                    if (dp[i+D[j]]>dp[i]+1){
                        dp[i+D[j]]=min(dp[i+D[j]],dp[i]+1);
                        best[i+D[j]]=best[i];
                        best[i+D[j]].push_back(D[j]);
                    }
                }
                else{
                    break;
                }
                }
                
        }
        cout<<dp[n]<<endl;
        for (int i = 0; i<best[n].size(); i++){
            cout<<best[n][i]<<" ";
        }
}
}
