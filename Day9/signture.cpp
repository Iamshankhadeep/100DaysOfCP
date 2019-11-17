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
      int n,m;
      char a;
      cin>>n>>m;
      vector<pair<int,int>> A;
      vector<pair<int,int>> B;
      for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
          cin>>a;
          if(a == '1'){
            A.push_back(make_pair(i,j));
          }
        }
      }
      for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
          cin>>a;
          if(a == '1'){
            B.push_back(make_pair(i,j));
          }
        }
      }
      int dr,dc;
      dr = A[0].first - B[0].first;
      dc = B[0].second - B[0].second;
      
      

    }
}