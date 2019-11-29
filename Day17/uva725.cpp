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

bool isUnique(int k,int l){
  vector<bool> v(10,false);
  int val;
  if(k<10000){
    v[0] = true;
  }
  while(k!=0){
    val = k%10;
    if(v[val]==true){
      return false;
    }
    if(v[val]== false){
      v[val] = true;
    }
    k /= 10;
  }
  if(l<10000 && v[0]==true){
    return false;
  }
  while(l!=0){
    val = l%10;
    if(v[val]==true){
      return false;
    }
    if(v[val]== false){
      v[val] = true;
    }
    l /= 10;
  }
  return true;
}

void solveAgain(int k){
  int deno = 1234,val;
  bool value =false;
  while(deno*k<100000){
    val = deno * k;
    if(isUnique(deno,val)){
      if(deno<10000)
        printf("%d / 0%d = %d\n",val,deno,k);
      else
      {
        printf("%d / %d = %d\n",val,deno,k);
      }
      
      value = true;
    }
    deno++;
  }
  if(value == false){
    printf("There are no solutions for %d.\n",k);
  }
}

void solve(){
  int k;
  vector<int> val;
  while(1){
    cin>>k;
    if(k==0){
      break;
    }
    else{
      val.push_back(k);
    }
  }
  for (int i = 0; i < val.size(); i++)
  {
    solveAgain(val[i]);
    if(i<val.size()-1){
      cout<<endl;
    }
  }
  
}

int main() {
    solve();
}