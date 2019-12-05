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
  int k,l;
  cin>>k;
  set<int> s;
  s.insert(0);
  for (int i = 1; i <= sqrt(k); i++){
    s.insert(i);
  }
  for (int i = 1; i < k; i++)
  {
    l = k/i;
    if(!s.count(l)){
      s.insert(l);
    }
    else{
      break;
    }
  }
  s.insert(k);
  cout<<s.size()<<"\n";
  for (auto const &a:s)
  {
    cout<<a<<" ";
  }
  cout<<endl;
  
}

int main() {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
}