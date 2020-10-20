#include <bits/stdc++.h>
# define  ll long long
# define max 10000000
using namespace std;
ll r[max];
int main() {
    ll  n,m,t;
    cin >> t;
    for (ll e = 0; e < t; e++) {
        cin >> n >> m;
        for (ll q = 0; q < n; q++) {
            string s;
            cin >> s;
            if (s == "H") {
                r[q] = 1;
            }
            else {
                r[q] = 0;
            }
        }
        bool cur = 1;
        for (ll q = n - 1; q >= n - m; q--) {
            if (r[q] == cur) {
                cur ^= 1;
            }
        }
        ll ans = 0;
        for (ll q = 0; q < n - m; q++) {
            if (r[q] == cur) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
