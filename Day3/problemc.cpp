//https://codeforces.com/contest/1245/problem/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string k;
    vector<int> lk;
    int mod = 1e9+7;
    cin>>k;
    if(k.find('m')<k.size() || k.find('w') < k.size()){
        cout<<"0"<<endl;
    }
    else{
        for (int i = 0; i < k.size(); i++)
        {
            long long int count = 0;
            if(k[i]=='n'){
                while(k[i]=='n'){
                    count++;
                    i++;
                }
                lk.push_back(count);
                i--;
            }
            else if(k[i]=='u'){
                while(k[i]=='u'){
                    count++;
                    i++;
                }
                lk.push_back(count);
                i--;
            }
        }
        long long int val = 1;
        for (int i = 0; i < lk.size(); i++)
        {
            val *= lk[i];
            val %= mod;
        }
        cout<<val<<endl;
    }
}