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

int main() {
    int t;
    cin>>t;
    vector<int> v(3);
    while (t--){
      cin>>v[0]>>v[1]>>v[2];
      sort(v.begin(),v.end());
      if(v[0]==v[1]==v[2]==1){
        cout<<"1"<<endl;
      }
      else if(v[0]+v[1]>v[2]){
        cout<<((v[0]+v[1]+v[2])>>1) <<endl;
      }
      else{
        cout<<min(v[2],v[0]+v[1])<<endl;
      }
    }
    
}