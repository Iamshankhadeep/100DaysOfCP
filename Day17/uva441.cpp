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

bool solve(){
  int k;
  cin>>k;
  if(k==0){
    return false;
  }
  vector<int> val(k);
  for (int i = 0; i < k; i++){
    cin>>val[i];
  }
  for (int i = 0; i < k; i++){
    for (int j = i+1; j < k ; j++){
      for (int l = j+1; l < k; l++){
        for (int m = l+1; m < k; m++){
          for (int n = m+1; n < k; n++){
            for (int o = n+1; o < k; o++){
              printf("%d %d %d %d %d %d\n",val[i],val[j],val[l],val[m],val[n],val[o]);
            }
          }
        }
      }
    }
  }
  return true;
}

int main() {
  bool k = true;
    while(k){
      k=solve(); 
      if(k==true){
        cout<<endl;
      }
    }
}