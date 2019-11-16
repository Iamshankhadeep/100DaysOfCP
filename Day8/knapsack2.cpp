#include "bits/stdc++.h"
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

using ll = long long;

const int INF = 1e9 + 5;
void min_self(ll& a,ll b){
  a = min(a,b);
}

int main() {
  ll n,w;
  cin>>n>>w;
  vector<ll> wt(n);
  vector<ll> val(n);
  for (int i = 0; i < n; i++)
  {
    cin>>wt[i]>>val[i];
  }
  ll sum_value=0;
  for(auto x:val){
    sum_value += x;
  }
  vector<ll> dp(sum_value+1,INF);
  dp[0] = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = sum_value-val[i]; j >= 0; j--)
    {
      min_self(dp[j+val[i]],wt[i]+dp[j]);
    }
  }
  ll answer = 0;
  for(int i=0;i<=sum_value;i++){
    if(dp[i]<=w){
      answer = max(answer,(ll)i);
    }
  }
  cout<<answer<<endl;
  
    
}