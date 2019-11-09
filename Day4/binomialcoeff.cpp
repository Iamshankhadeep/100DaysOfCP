#include<bits/stdc++.h>
using namespace std;

int bino(int n,int k){
    vector<int> v(k+1,0);
    v[0]=1;
    for(int i=1;i<=n;i++){
        for (int j = min(i,k); j > 0; j--)
        {
            v[j] = v[j] +v[j-1];
        }
    }
    return v[k];
}
int main(){
    int a,n,k;
    cin>>a;
    while(a--){
        cin>>n>>k;
        cout<<bino(n,k)<<endl;
    }
}