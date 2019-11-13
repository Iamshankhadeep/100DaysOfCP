#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n,c,temp;
    cin>>a;
    while(a--){
        cin>>n;
        int win=0;
        int val=true;
        deque<int> lk;
        while(n--){
            cin>>c;
            deque<int> v;
            for (int i = 0; i < c; i++)
            {
                cin>>temp;
                if(c%2==1 && i == (c/2) ){
                    lk.push_back(temp);
                }
                else{
                v.push_back(temp);
                }
            }
            //showdq(v);
            while(v.size()!=0){
                if(val){
                    win += v.front();
                    v.pop_front();
                    val=false;
                }
                else
                {
                    v.pop_back();
                    val = true;
                }
            }
        }
        sort(lk.begin(),lk.end());
        while(lk.size()!=0){
                if(val){
                    win += lk.back();
                    lk.pop_back();
                    val=false;
                }
                else
                {
                    lk.pop_front();
                    val = true;
                }
        }
        cout<<win<<"\n";
    }
}