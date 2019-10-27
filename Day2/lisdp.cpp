#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> &a,int k){
    vector<int> dp(k,1);
    for(int i=1;i<k;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                dp[i] = max(dp[j] + 1,dp[i]);
            }
        }
    }
    auto it = max_element(dp.begin(),dp.end());
    return *it;
}

int main(){
    int a;
    cin>>a;
    while(a--){
        int k;
        cin>>k;
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin>>v[i];
        }
        cout<<lis(v,k)<<endl;
        
    }
}