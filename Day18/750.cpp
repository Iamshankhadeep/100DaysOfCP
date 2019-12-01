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

int row[8], TC, a, b, lineCounter;
// ok to use global variables
bool place(int r, int c)
{
  for (int prev = 0; prev < c; prev++)
    // check previously placed queens
    if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c)))
      return false;
  // share same row or same diagonal -> infeasible
  return true;
}
void backtrack(int c)
{
  if (c == 8 && row[b] == a)
  {
    // candidate sol, (a, b) has 1 queen
    printf(" %2d       %d", ++lineCounter, row[0] + 1);
    for (int j = 1; j < 8; j++)
      printf(" %d", row[j] + 1);
    printf("\n");
  }
  for (int r = 0; r < 8; r++)
    // try all possible row
    if (place(r, c))
    {
      // if can place a queen at this col and row
      row[c] = r;
      backtrack(c + 1);
      // put this queen here and recurse
    }
}
int main()
{
  scanf("%d", &TC);
  while (TC--)
  {
    scanf("%d %d", &a, &b);
    a--;
    b--;
    // switch to 0-based indexing
    memset(row, 0, sizeof row);
    lineCounter = 0;
    printf("SOLN       COLUMN\n");
    printf(" #       1 2 3 4 5 6 7 8\n\n");
    backtrack(0);
    // generate all possible 8! candidate solutions
    if (TC)
      printf("\n");
  }
} // return 0;