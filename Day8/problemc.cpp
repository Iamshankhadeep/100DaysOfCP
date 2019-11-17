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

const ll INF = 1e18 + 5;
void min_self(ll&a,ll b){
  a=min(a,b);
}
int main() {
    ll n,m;
    cin>>n>>m;
    vector<ll> dp(n+1,INF);
    vector<ll> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    dp[0] = 0;
    for (ll item = 1; item <= n; item++)
    {
      vector<ll> temp_dp(n+1,0);
      temp_dp[item] = INF;
      for (ll k = 0; k < m; k++)
      {
      for (ll j = 0; j < n; j++)
        {
          if(k+j<n){
            min_self(temp_dp[item],dp[j]+item*a[j+k]);
          }
        }
        dp[item] = temp_dp[item];
      }
    }
    for (int i = 0; i <= n; i++)
    {
      cout<<dp[i]<<" ";
    }    
    
}