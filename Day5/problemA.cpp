#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    cin>>a;
    while(a--){
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=n;i>0;i--){
            if(v[n-i]>=i){
                cout<<i<<endl;
                break;
            }
        }
        
    }
}