#include<bits/stdc++.h>
using namespace std;

int editDistance(string s,string d){
    int m = d.size();
    int n = s.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for (int j = 0; j <= n ; j++)
        {
            if(i==0){
                dp[i][j] = j;
            }
            else if(j==0)
            {
                dp[i][j] = i;
            }
            else if(d[i-1]==s[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
            
        }
        
    }
    /* for(int i =0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } */
    return dp[m][n];
}

int main(){
    int a;
    cin>>a;
    while(a--){
        string s,d;
        cin>>s>>d;
        cout<<editDistance(s,d)<<endl;
    }    
}