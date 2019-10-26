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
        auto max =max_element(v.begin(),v.end());
        auto min = min_element(v.begin(),v.end());
        if(min>max){
            cout<<*max<<" "<<*min<<endl;
        }
        else{
            cout<<*min<<" "<<*max<<endl;
        }
        
        
    }
}