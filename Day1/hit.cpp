#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int k;
        cin>>k;
        vector<int> v(k+1);
        for(int i=1;i<=k;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int m=60,n=75,o=90;
        int lk = k/4;
        auto it = lower_bound(v.begin(),v.end(),m);
        auto it1 = lower_bound(v.begin(),v.end(),n);
        auto it2 = lower_bound(v.begin(),v.end(),o);
        //auto it3 = lower_bound(v.begin(),v.end(),o);
        //cout<<it-v.begin()-1<<" "<<it1-it<<" "<<it2-it1<<" "<<v.end()-it2<<" "<<endl;
        if( (it-v.begin()-1) == lk && (it1-it) == lk && (it2-it1) == lk && (v.end()-it2) == lk){
            cout<<m<<" "<<n<<" "<<o<<" "<<endl; 
        }
        else
        { 
            m=v[k/4 + 1];
            n=v[k/2 + 1];
            o=v[(3*k)/4 + 1];
            auto it = lower_bound(v.begin(),v.end(),m);
            auto it1 = lower_bound(v.begin(),v.end(),n);
            auto it2 = lower_bound(v.begin(),v.end(),o);
            //auto it3 = lower_bound(v.begin(),v.end(),o);
            //cout<<it-v.begin()-1<<" "<<it1-it<<" "<<it2-it1<<" "<<v.end()-it2<<" "<<endl;
            if( (it-v.begin()-1) != lk || (it1-it) != lk || (it2-it1) != lk || (v.end()-it2) != lk){
                cout<<-1<<endl;
            }
            else
            {
                cout<<m<<" "<<n<<" "<<o<<" "<<endl; 
            }
        }
        
    }
}