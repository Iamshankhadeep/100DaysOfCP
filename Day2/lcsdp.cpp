#include<bits/stdc++.h>
using namespace std;

int lcs(string s,string d){
    int len1=s.size();
    int len2=d.size();
    int dp[len1+1][len2+1];
    for(int i = 0;i <= len1;i++){
        for (int j = 0; j <= len2; j++)
        {
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if( s[i-1]==d[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[len1][len2];
}

int main(){
    int a;
    cin>>a;
    while(a--){
        string s,d;
        cin>>s>>d;
        cout<<lcs(s,d)<<endl;
    }
}