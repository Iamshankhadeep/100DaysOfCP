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
  string s,t;
  cin>>s>>t;
  int sl = s.size(), tl = t.size();
  vector<vector<int>> dp(tl+1,vector<int>(sl+1));
  for (int i = 0; i <= tl; i++)
  {
    for (int j = 0; j <= sl; j++)
    {
      if(i==0 || j==0){
        dp[i][j] = 0;
      }
      else if(s[j-1] == t[i-1]){
        dp[i][j] = dp[i-1][j-1]+1;
      }
      else{
        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
      }
    }
  }
  if(dp[tl][sl]==0){
    puts("");
  }
  else{
     int index = dp[tl][sl]; 
  
   // Create a character array to store the lcs string 
   char lcs[index+1]; 
   lcs[index] = '\0'; // Set the terminating character 
  
   // Start from the right-most-bottom-most corner and 
   // one by one store characters in lcs[] 
   int i = tl, j = sl; 
   while (i > 0 && j > 0) 
   { 
      // If current character in X[] and Y are same, then 
      // current character is part of LCS 
      if (t[i-1] == s[j-1]) 
      { 
          lcs[index-1] = t[i-1]; // Put current character in result 
          i--; j--; index--;     // reduce values of i, j and index 
      } 
  
      // If not same, then find the larger of two and 
      // go in the direction of larger value 
      else if (dp[i-1][j] > dp[i][j-1]) 
         i--; 
      else
         j--; 
   }
   puts(lcs);
  }
    
}