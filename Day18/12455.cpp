#include "bits/stdc++.h"
using namespace std;
#define sim template <class c
#define ris return *this
#define dor > debug &operator<<
#define eni(x)                                                                  \
  sim > typename enable_if<sizeof dud<c>(0) x 1, debug &>::type operator<<(c i) \
  {
sim > struct rge
{
  c b, e;
};
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug
{
#ifdef LOCAL
  ~debug()
  {
    cerr << endl;
  }
  eni(!=) cerr << boolalpha << i;
  ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d)
{
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d)
{
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
  sim dor(const c &)
  {
    ris;
  }
#endif
}
;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

using ll = long long;

const int INF = 1e9 + 5;

void solve(){
  int k,t;
  cin>>k;
  cin>>t;
  vector<int> v(t);
  for(auto &x:v){
    cin>>x;
  }
  int i=0,j;
  bool val =false;
  for (i=0; i < (1<<t); i++){
    int sum=0;
    for (j = 0; j < t; j++)
    {
      if(i & (1<<j)){
        sum+=v[j];
      }
    }
    if(sum==k){
      val = true;
      break;
    }
  }
  if(val)
    cout<<"YES"<<endl;
  else{
    puts("NO");
  }
  
}

int main()
{
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}