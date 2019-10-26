#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int> v(20000+1);
    int k=1;
    while(k<=20000){
        v[k]=k;
        k*=3;
    }
    k=1;
    int l=1;
    while(k<=20000){
        v[k]=k;
        l*=3;
        k+=l;
    }
    int temp=20000;
    for(int i=20000;i>=0;i--){
        if(v[i]!=0){
            temp=v[i];
        }
        else{
            v[i]=temp;
        }
    }
    while(a--){
        int lkk;
        cin>>lkk;
        cout<<v[lkk]<<endl;
    }
}