#include<bits/stdc++.h>
using namespace std;

int eggDrop(int e,int k){
    int res;
    vector<vector<int>> dp(e+1,vector<int>(k+1));
    for(int i=1;i<=e;i++){
        dp[i][1] = 1;
        dp[i][0] = 0;
    }
    for (int i = 1; i <= k; i++)
    {
        dp[1][i] = i;
    }
    for (int i = 2; i <= e; i++)
    {
        for (int j = 2; j <= k; j++)
        {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= j; x++)
            {
                res = 1 + max(dp[i][j-x],dp[i-1][x-1]);
                if(res < dp[i][j]){
                    dp[i][j] = res;
                }
            }
            
        }
        
    }
    return dp[e][k];
    
}

int main(){
    int a;
    cin>>a;
    while(a--){
        int n,e;
        cin>>n>>e;
        cout<<eggDrop(n,e)<<endl;
    }
}