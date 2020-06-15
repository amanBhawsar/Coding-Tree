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
		int n, rem = 0, z;
		cin >> n;
		int a[n];
		unordered_map<int, int> umap;
		bool ans = true;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (ans == false) {
				continue;
			}
			if (a[i] == 5) {
				umap[5]++;
			} else if (a[i] == 10) {
				umap[10]++;
				if (umap[5] > 0) {
					umap[5]--;
				} else {
					ans = false;
				}
			} else {
				umap[15]++;
				if (umap[10] > 0) {
					umap[10]--;
				} else if (umap[5] > 1) {
					umap[5] -= 2;
				} else {
					ans = false;
				}
			}
		}
		cout << (ans ? "YES" : "NO") << "\n";
	}
	return 0;
}