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
  // int n,k;
  // cin>>n>>k;
  // vector<int> a(n);
  // vector<int> okay(n);
  // for (int &x:a){
  //   cin>>x;
  // }
  // sort(a.begin(),a.end());
  // for(int i=n;i>=1;i--){
  //   int lk =i;
  //   int day =1;
  //   int sum = 0;
  //   int val = min(i,k);
  //   for(int k=i-1;k>=0 && lk >0;k--){
  //     for (int j = 0; j < val && k>=0 ; j++){
  //       sum += day*a[k];
  //       k--;
  //     }
  //     day++;
  //     lk -= val;
  //     k++;
  //   }
  //   okay[i-1]=sum;
  // }
  // for (int i = 0; i < n; i++){
  //   cout<<okay[i]<<" ";
  // }
  int nbSweets, maxPerDay;
    cin >> nbSweets >> maxPerDay;
 
    vector<int> val(nbSweets);
 
    for (int iSweet = 0; iSweet < nbSweets; ++iSweet) {
        cin >> val[iSweet];
    }
 
    sort(val.begin(), val.end());
 
    vector<long long> ans(nbSweets);
 
    long long curSum = 0;
 
    for (int lastTaken = 0; lastTaken < nbSweets; ++lastTaken) {
        curSum += val[lastTaken];
        ans[lastTaken] = curSum;
 
        if (lastTaken >= maxPerDay) {
            ans[lastTaken] += ans[lastTaken - maxPerDay];
        }
 
        cout << ans[lastTaken] << (lastTaken == nbSweets-1 ? '\n' : ' ');
    }
 
    return;
}

int main() {
    solve();
}