#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    while(k--){
        int x,y,n,h,y1,y2,l;
        int val=0;
        cin>>n>>h>>y1>>y2>>l;
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        for (int i = 0; i < n; i++)
        {
            //cout<<v[i].first<<" "<<v[i].second<<endl;
            if(v[i].first == 1 && h-y1<=v[i].second){
                val++;                    
            }
            else if(v[i].first == 2 && y2>=v[i].second){
                val++;
            }
            else if(l > 0){
                l--;
                val++;
                if(l==0)
                    break;
            }
        }
        if(l==0)
            cout<<val-1<<endl;
        else
        {
            cout<<val<<endl;
        }
        
        
    }
}