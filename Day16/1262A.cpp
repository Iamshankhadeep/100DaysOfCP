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
const int inf = (int)1e9 + 1;
using ll = long long;
#define rep(i, l, r) for (int i = (l); i < (r); i++)
const int INF = 1e9 + 5;
inline bool setmin(int &x, int y) { return (y < x) ? x = y, 1 : 0; }
inline bool setmax(int &x, int y) { return (y > x) ? x = y, 1 : 0; }
inline bool setmin(ll &x, ll y) { return (y < x) ? x = y, 1 : 0; }
inline bool setmax(ll &x, ll y) { return (y > x) ? x = y, 1 : 0; }
int main() {
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    int r = INF;
    int l = -INF;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
      cin>>b>>c;
      setmin(r,c);
      setmax(l,b);
    }
    if(r<=l){
      cout<<l-r<<endl;
    }
    else{
      cout<<0<<endl;
    }
  }
}