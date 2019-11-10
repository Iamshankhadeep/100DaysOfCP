    #include <bits/stdc++.h>
    #include <ext/pb_ds/tree_policy.hpp>
    #include <ext/pb_ds/assoc_container.hpp>
     
    using namespace std;
    using namespace __gnu_pbds;
     
    typedef long long   ll;
    typedef long double ld;
     
    #define all(x)  (x).begin(), (x).end()
    #define sz(x)   (x).size()
    #define pb      push_back
    #define mp      make_pair
    #define fr      first
    #define sc      second
     
    ll n;
    void input() {
        cin >> n;
    }
     
    void solve() {
        ll dv = 2, sq = sqrtl(n) + 1;
        while(dv <= sq) {
            if (n % dv == 0) {
                break;
            }
            dv++;
        }
        if (n % dv != 0) {
            cout << n << endl;
            return;
        }
        ll lft = n;
        while(lft % dv == 0) {
            lft /= dv;
        }
        if (lft == 1) {
            cout << dv << endl;
        }
        else {
            cout << 1 << endl;
        }
    }
     
    int main() {
        int testcases = 1;
        // scanf("%d", &testcases);
        while(testcases--) {
            input();
            solve();
        }
        return 0;
    }