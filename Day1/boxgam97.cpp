#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int k,n,p;
        cin>>k>>n>>p;
        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin>>v[i];
        }
        vector<int>::iterator it;
        if(p==0){
            it = max_element(v.begin(),v.end());
        }
        else{
            it = min_element(v.begin(),v.end());
        }
        if(n%2==1){
            cout<<*it<<endl;
        }
        else{
            if(p==0){
                if(*(it+1)<*(it-1)){
                    cout<<*(it+1)<<endl;
                }
                else
                {
                    cout<<*(it-1)<<endl;
                }
                
            }
            else{
                cout<<*it<<endl;
            }
        }
        
    }
}