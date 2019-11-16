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
  vector<int> dp(3);
  for (int day = 0; day < n; day++)
  {
    vector<int> ne(3,0);
    vector<int> temp(3);
    cin>>temp[0]>>temp[1]>>temp[2];

    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(i!=j){
          ne[j] = max(ne[j],dp[i]+temp[j]);
        }
      }
    }
    dp=ne;
  }
  cout<<max({dp[0],dp[1],dp[2]})<<endl;
}