#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,x,y;
	cin>>a;
	while(a--){
		cin>>x>>y;
		if(__gcd(x,y)==1){
			cout<<"Finite"<<endl;
		}
		else{
			cout<<"Infinite"<<endl;
		}
	}
}