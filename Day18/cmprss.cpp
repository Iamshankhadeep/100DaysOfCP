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

void prints(int a,int b){
  printf("%d...%d",a,b);
}

void solve(){
  int t;
  cin>>t;
  vector<int> v(t);
  for(auto &x : v){
    cin>>x;
  }
  int i,j;
  for (i = 0; i < t; i++)
  {
    int counter = 0;
    for (j = i+1; j < t; j++)
    {
      if(v[j]-v[j-1]!=1){
        break;
      }
      else if(v[j]-v[j-1]==1){
        counter++;
      }
    }
    if(counter>=2){
      if(i==0)
        prints(v[i],v[j-1]);
      else
      {
        printf(",");
        prints(v[i],v[j-1]);
      }
      
    }
    else{
      for (int k = i; k < j; k++)
      {
        if(k!=0)
          printf(",%d",v[k]);
        else
        {
          printf("%d",v[k]);
        }
        
      }
    }
    i = j-1;
  }
  printf("\n"); 
}

int main() {
  int t;
  cin>>t;
  while (t--)
  {
    solve();
  }
}