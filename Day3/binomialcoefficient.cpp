#include<bits/stdc++.h>
using namespace std;

int binomial(int n,int k){
    vector<vector<int>> dp(n+1,vector<int>(k+1));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= min(i,k); j++)
        {
            if(j==0 || j==i){
                dp[i][j] = 1;
            }
            else{
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
            }
        }
    }
    return dp[n][k];
}

int main(){
    int a,n,k;
    cin>>a;
    while(a--){
        cin>>n>>k;
        cout<<binomial(n,k)<<endl;
    }
}