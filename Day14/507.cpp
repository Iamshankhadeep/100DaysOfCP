#include<cstdio>
 
using namespace std;
 
int b, s, n[30000];
 
int main() {
    scanf("%d", &b);
    for(int i = 1; i <= b; i++) {
        scanf("%d", &s);
        n[0] = 0;
        for(int j = 1; j < s; j++)
            scanf("%d", &n[j]);
        int a = 0, b = 0, c = 0, sum = 0, max = 0;
        for(int j = 1; j < s; j++) {
            sum += n[j];
            if(sum > max || (sum == max && j - a > b - c)) {
                max = sum;
                b = j;
                c = a;
            }
            if(sum < 0) {
                a = j;
                sum = 0;
            }
        }
        if(max > 0)
            printf("The nicest part of route %d is between stops %d and %d\n", i, c + 1, b + 1);
        else
            printf("Route %d has no nice parts\n", i);
    }
}
/*#include "bits/stdc++.h"
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

vector<int> solve(){
  int s;
  cin>>s;
  vector<int> n(s-1);
  for (int i = 0; i < s-1; i++)
  {
    cin>>n[i];
  }
  //int l,r;
  int a = 0, b = 0, c = 0, sum = 0, max = 0;
        for(int j = 0; j < s-1; j++) {
            sum += n[j];
            if(sum > max || (sum == max && j - a +1 > b - c +1)) {
                max = sum;
                b = j;
                c = a;
            }
            if(sum < 0) {
                a = j;
                sum = 0;
            }
        }
  if(max>0)
    return {c+1,b+1};
  else{
    return {-1,-1};
  }
}

int main() {
    vector<int> val(2);
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
      val = solve();
      if(val[0]!= -1 && val[1]!=-1){
        cout<<"The nicest part of route "<<i<<" is between stops "<<val[0]<<" and "<<val[1]<<"\n";
      }
      else{
        cout<<"Route "<<i<<" has no nice parts"<<"\n";
      }
    }
}*/