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

void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  vector<int> b(n);
  vector<int> dp(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin>>b[i];
  }
  for (int i = 0; i < n; i++)
  {
    dp[i] = b[i] - v[i];
    if(dp[i]<0){
      cout<<"NO"<<endl;
      return;
    }
  }
  int i = 0;
  int j = n-1;
  while(dp[i]==0 || dp[j]==0){
    if(dp[i]==0){
      i++;
    }
    if(dp[j]==0){
      j--;
    }
  }
  for (i; i < j; i++)
  {
    if(dp[i]!=dp[i+1]){
      cout<<"NO"<<"\n";
      return;
    }
  }
  cout<<"YES"<<"\n";
  return;
  
  
}

int main() {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
}