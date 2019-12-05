#include <bits/stdc++.h>
using namespace std;

const int N = (int)2e5 + 100;

vector<int> g[N];
vector<bool> used(N,0);

void addEdge(int i,int j){
	g[i].push_back(j);
	g[j].push_back(i);
}

void dfs(int i){
	used[i] = 1;
	for(auto v: g[i]){
		if(!used[v]){
			dfs(v);
		}
	}
} 


int main(){
	int t;
	cin>>t;
	string s;
	for (int i = 0; i < t; i++)
	{
		cin>>s;
		for(auto a:s){
			addEdge(i,t+a-'a');
		}
	}
	int val =0;
	for (int i = t; i < t+26; i++)
	{
		if(!g[i].empty() && !used[i]){
			dfs(i);
			val++;
		}
	}
	cout<<val<<endl;
}