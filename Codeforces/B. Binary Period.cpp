#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back.
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FASTIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// ROTATION
// rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());
// rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end());


int32_t main()
{
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t) {
		string s;
		cin >> s;

		int c1 = 0, c0 = 0;
		for (int z = 0; z  < s.size(); z++) {
			if (s[z] == '0') {
				c0++;
			} else {
				c1++;
			}
		}
		if (c0 == s.size() || c1 == s.size() ) {
			cout << s << "\n";
		} else {
			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] == s[i + 1]) {
					if (s[i] == '0') {
						s.insert(i + 1, "1");
					} else {
						s.insert(i + 1, "0");
					}
				}
			}
			cout << s << "\n";
		}
		// }
	}
	return 0;
}