#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    //int maxs = 1e9;
    vector<int> v(131,0);
    vector<int> count(130,0);
    vector<long long int> loc(130,0);
    //count[0]++;
    for (int i = 0; i < 130; i++)
    {
        if(count[v[i]]==0){
            count[v[i]]++;
            v[i+1]=0;
            loc[v[i]] = i;
        }
        else{
            v[i+1] = i - loc[v[i]];
            loc[v[i]] = i;
        }
    }
    int n;
    int cnt;
    while(k--){
        cin>>n;
        cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==v[n-1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
