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
  int t;
  cin>>t;
  while(t--){
    set<int> k;
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin>>b[i];
    }
    vector<pair<int,int>> c;
    for (int i = 0; i < n; i++)
    {
      if(b[i]-a[i]!=0){
        c.push_back(make_pair(b[i]-a[i],i));
      }
    }
    int i;
    if(c.size()==0){
      puts("YES");
      continue;
    }
    else if(c.size()==1){
      if(c[0].first<0){
        puts("NO");
        break;
      }
    }
    else{
      for (i = 1; i < c.size(); i++)
      {
        if(c[i].first <0 || c[i-1].first<0){
          puts("NO");
          break;
        }
        else if(c[i].first != c[i-1].first || c[i].second-1 != c[i-1].second){
          puts("NO");
          break;
        }
      }
    }
    if(i==c.size()){puts("YES");}
    
  }
    
}