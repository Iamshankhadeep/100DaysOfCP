#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    string s,t;
    cin>>a;
    while(a--){
        cin>>n;
        vector<int> sk;
        cin>>s;
        cin>>t;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                sk.push_back(i);
            }
        }
        if(sk.size() == 2){
            if(s[sk[0]]==s[sk[1]] && t[sk[0]]==t[sk[1]])
                cout<<"Yes"<<endl;
            else
            {
                    cout<<"No"<<endl;
            }
            
        }
        else{
            cout<<"No"<<endl;
        }
        

    }
}