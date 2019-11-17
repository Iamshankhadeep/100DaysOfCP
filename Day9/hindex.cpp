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
int hIndex(vector<int> nums) {
  vector<int> k;
  for(int i=0;i<nums.size();i++){
    int n=i;
    int count=1;
    
    if(n<0)
        return 0;
    
    sort(nums.begin(), nums.begin()+i+1);
    while(n>0)
    {
        if(nums[n]>=count && nums[n-1]<=count){
            k.push_back(count);
            break;
        }
        n--;
        count++;
   }
    if(nums[0] >= count && n==0)
      k.push_back(count);
  }
    for (int i = 0; i < k.size(); i++)
    {
      cout<<k[i]<<" ";
    }
    cout<<endl;
    
}
int main() {
    int t,n;
    cin>>t;
    for (int i = 1; i <=t; i++)
    {
      cin>>n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
        cin>>v[i];
      }
      cout<<"Case #"<<i<<": ";
      hIndex(v);
    }
}