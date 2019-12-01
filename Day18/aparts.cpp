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

void solve(){
  int m,n;
  cin>>m>>n;
  vector<vector<int>> v(m+2,vector<int>(n+2));
  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      cin>>v[i][j];
    }
  }
  int lk;
  for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      lk =max(max(v[i-1][j-1],v[i-1][j]),v[i-1][j+1]);
      if(v[i][j]> lk){
        cout<<"1";
      }
      else{
        cout<<"0";
        v[i][j] = lk;
      }
    }
    cout<<endl;
  }
  
  
}

int main() {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
}