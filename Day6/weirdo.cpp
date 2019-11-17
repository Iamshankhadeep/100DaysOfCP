#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int a=0,b=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            a++;
        }
        else
        {
            b++;
        }
    }
    return a>=b;
}
int main(){
    int a,l;
    string st;
    cin>>a;
    while (a--)
    {
        cin>>l;
        vector<string> s;
        vector<pair<int,long double>> sp;
        vector<string> k;
        vector<pair<int,long double>> kp;
        for (int i = 0; i < 26; i++)
        {
            sp.push_back(make_pair(0,0));
            kp.push_back(make_pair(0,0));
        }
        while(l--){
            cin>>st;
            if(check(st)){
                s.push_back(st);
                vector<int> ch(26,0);
                for (int i = 0; i < st.size(); i++)
                {
                    sp[st[i]-'a'].second++;
                    ch[st[i]-'a']++;
                }
                for (int i = 0; i < 26; i++)
                {
                    if(ch[i]){
                        sp[i].first++;
                    }
                }
            }
            else
            {
                k.push_back(st);
                vector<int> ch(26,0);
                for (int i = 0; i < st.size(); i++)
                {
                    kp[st[i]-'a'].second++;
                    ch[st[i]-'a']++;
                }
                for (int i = 0; i < 26; i++)
                {
                    if(ch[i]){
                        kp[i].first++;
                    }
                }
            }
        }
        long double val,val1=1,val2=1;
        for (int i = 0; i < sp.size(); i++)
        {
            if(sp[i].first != 0 && sp[i].second !=0){
                val1 *= (sp[i].first)/(sp[i].second*sp[i].second);
            }
        }
        for (int i = 0; i < kp.size(); i++)
        {
            if(sp[i].first != 0 && sp[i].second !=0){
                val2 *= (kp[i].first)/(kp[i].second*kp[i].second);
            }
        }
        val = val1/val2;
        if(val<1e7){
            cout<<fixed<<setprecision(10)<<val<<endl;
        }
        else{
            puts("Infinity");
        }
    }
}