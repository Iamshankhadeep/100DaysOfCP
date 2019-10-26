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
        for (int i = 1; i <= k; i++)
        {
            int count =1;
            int l=i,lk=v[i];
            while(l!=lk){
                lk=v[lk];
                count++;
            }           
            cout<<count<<" ";      
        }
        cout<<endl;
        
        
    }
}