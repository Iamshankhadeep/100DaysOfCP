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
  int a,b,c;
  cin>>a>>b>>c;
  for (int i = -22; i <= 22; i++){
    for (int j = -100; j <= 100; j++){
      for (int k = -100; k <= 100; k++){
        if(i+j+k != a || i==j || j==k || i==k)continue;
        else if(i*j*k == b && (i*i + j*j + k*k)==c){
          printf("%d %d %d",i,j,k);
          return;
        }
      }      
    }
  }
  printf("No solution.");
  
}

int main() {
    int k;
    cin>>k;
    while(k--){
      solve();
      cout<<endl;
    }
}