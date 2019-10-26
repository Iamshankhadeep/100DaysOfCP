#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int k;
        cin>>k;
        vector<int> v(k+1);
        for (int i = 1; i <= k; i++)
        {
            cin>>v[i];
        }
        
        vector<int> temp(k+1,0);
        for(int i=1;i<=k;i++){
            if(temp[i]==0){
                int count=1;
                int l=i,lk=v[i];
                while(l!=lk){
                    lk=v[lk];
                    count++;
                }
                lk=v[i];
                temp[i]=count;
                while(l!=lk){
                    temp[lk]=count;
                    lk=v[lk];
                }
            }
        }
        for (int i = 1; i <= k; i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        
    }
}