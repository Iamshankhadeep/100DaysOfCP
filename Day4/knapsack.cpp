#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int k,vector<int> &val,vector<int> &wt){
    vector<vector<int>> dp(n+1,vector<int>(k+1));
    for (int i = 0; i <= n; i++)
    {
        for(int j=0;j<=k;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(wt[i-1]<=j){
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}

int main(){
    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        vector<int> val(n);
        vector<int> wt(n);
        for (int i = 0; i < n; i++)
        {
            cin>>val[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>wt[i];
        }
        cout<<knapsack(n,k,val,wt)<<endl;
        
    }
}