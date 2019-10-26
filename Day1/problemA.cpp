#include<bits/stdc++.h>
using namespace std;

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
        sort(v.begin(),v.end());
        bool l=true;
        for (int i = 0; i < k-1; i++)
        {
            if(v[i+1]-v[i]==1){
                l=false;
            }            
        }
        cout<<2-l<<endl;
    }
}