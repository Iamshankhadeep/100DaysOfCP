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
int find(int p, vector<int> arr) {
	int i;
	for (i = 0; i < 8; i++) {
		if (arr[i] == p)
			break;
	}
	return i;
}
bool solve(){
  int n,m;
  cin>>n>>m;
  if(n==0 && m==0){
    return false;
  }
  vector<int> p = {0,1,2,3,4,5,6,7};
  vector<vector<int>> v(m,vector<int>(3));
  for (int i = 0; i < m; i++)
  {
    cin>>v[i][0]>>v[i][1]>>v[i][2];
  }
  int counter = 0 ;
  do{
      bool sat = true;
      for (int i = 0; i < m; i++){
        int pos1 = find(v[i][0],p);
				int pos2 = find(v[i][1],p);
				if (v[i][2] > 0) {
					if (abs(pos1 - pos2) > v[i][2]) {
						sat = false;
						break;
					}
				}
				if (v[i][2] < 0) {
					if (abs(pos1 - pos2) < (-v[i][2])) {
						sat = false;
						break;
					}
				}
      }
      if(sat) 
        counter++;
  }while(next_permutation(p.begin(),p.begin()+n));
  printf("%d\n",counter);
  return true;
}

int main() {
  bool k=true;
  while(k){
    k=solve();
  }
    
}