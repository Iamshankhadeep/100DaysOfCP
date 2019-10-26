#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        long long int k;
        cin>>k;
        int noOf10=0,noOf2=0;
        while(k>1){
            if(k%10==0){
                k/=10;
                noOf10++;
            }
            else if(k%2==0){
                k/=2;
                noOf2++;
            }
            else{
                cout<<"No"<<endl;
                break;
            }
        }
        //cout<<k;
        if(k==1){
            if(noOf2>=0 && noOf2<= noOf10){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}