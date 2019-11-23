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
  int n,k,x;
  cin>>n>>k;
  vector<pair<int,int>> val;
  for (int i = 0; i < n; i++)
  {
    cin>>x;
    val.emplace_back(x,i%k);
  }
  sort(val.begin(),val.end());
  int i=0;
  int r=0;
  int ans = INT_MAX,lk;
  int cnt0 = k;
  vector<int> cnt(k,0);
  //int jk = val[i].second;
  for (i = 0; i < n; i++)
  {
    //int cnt0 = k-1;
    //cnt[val[i].second] = true;
    //cnt0--; 
    while(r<n && cnt0>0){
      cnt0 -= (cnt[val[r].second] == 0);
      cnt[val[r++].second]++;
    }
    if(cnt0==0){
      lk = val[r-1].first - val[i].first;
      ans = min(ans,lk);
    }
    cnt[val[i].second]--;
    cnt0 += (cnt[val[i].second]==0);
  }
  cout<<ans<<endl;
  return;
    
}

int main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
    
}