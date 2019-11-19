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

int main() {
  int n;
  cin>>n;
  vector<int> p(n);
  for (int i = 0; i < n; i++)
  {
    cin>>p[i];
  }
  vector<int> dp(n);
  int maxs = INT_MIN;
  dp[0] = 1;
  for (int i = 1; i < n; i++)
  {
    if(p[i]>p[i-1]){
      dp[i] = dp[i-1] +1;
    }
    else
    {
      dp[i] = 1;
    }
    maxs = max(maxs,dp[i]);
  }
  if(n==1){
    cout<<1<<"\n";
  }
  else{
    cout<<maxs<<endl;
  }
}