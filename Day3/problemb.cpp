//https://codeforces.com/contest/1245/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,a,b,c;
    string s;
    cin>>k;
    while(k--){
        cin>>n;
        cin>>a>>b>>c;
        cin>>s;
        vector<int> v(26,0);
        for (int i = 0; i < n; i++)
        {
            v[s[i]-'A']++;
        }
        
        int count = min(a,v['S'-'A'])+ min(b,v['R'-'A']) + min(c,v['P'-'A']);
        if(2*count<n){
            cout<<"NO"<<endl;continue;
        }
        string lk;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='S' && a){
                lk += 'R';a--;
            }
            else if(s[i]=='R' && b)
            {
                lk += 'P';b--;
            }
            else if(s[i]=='P' && c)
            {
                lk += 'S';c--;
            }
            else{
                lk += '_';
            }    
        }
        for (int i = 0; i < n; i++)
        {
            if(lk[i]=='_'){
                if(a){
                    lk[i] = 'R';a--;
                }
                else if(b)
                {
                    lk[i] = 'P';b--;
                }
                else
                {
                    lk[i] = 'S';
                    c--;
                }
                
            }
        }
        cout<<"YES"<<endl;
        cout<<lk<<endl; 
    }
}
