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
    long long int n,w;
    cin>>n>>w;
    vector<int> weight(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin>>weight[i]>>v[i];
    }
    vector<vector<long long int>> dp(n+1,vector<long long int>(w+1));
    for(int i=0;i<=n;i++){
      for (int j = 0; j <= w; j++)
      {
        if(i==0 || j==0){
          dp[i][j]=0;
        }
        else if(weight[i-1] <= j){
          dp[i][j] = max(v[i-1]+dp[i-1][j-weight[i-1]], dp[i-1][j]);
        }
        else{
          dp[i][j] = dp[i-1][j];
        }

      }
    }
    cout<<dp[n][w]<<endl;
}