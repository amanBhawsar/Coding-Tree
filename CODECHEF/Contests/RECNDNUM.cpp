#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define ff              first
#define ss              second
// #define int             long long
#define pb              push_back.
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define all(cont)       cont.begin(), cont.end()
#define unique(a)       sort(all(a)) , (a).erase(unique((a).begin(), (a).end()),(a).end())
#define pqll_max        priority_queue<ll> // max heap. push(),pop(),top(),size(),empty()
#define pqll_min        priority_queue<ll,vector<ll>,greater<ll> >
#define lb(v,val)       lower_bound(v.begin(),v.end(),val) //first equal to or lower than [------------
#define ub(v,val)       upper_bound(v.begin(),v.end(),val) //first greater than ------------)
#define bs(v,x)         binary_search(v.begin(),v.end(),x)  //boolean return type
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FASTIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
// ROTATION
// rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());
// rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end());
// min({ 1, 2, 3, 4, 5, 0, -1, 7 }  min can be used to find min of multiple values like this

int32_t main()
{
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t) {
		long long int n, k;
		cin >> n >> k;
		//take anather code for 0
		if (n == 0) {
			long long int firstN = (k * (k - 1)) % mod;
			cout << firstN << "\n";
			continue;
		}


		//first time to reach n we need
		long long int firstN = (n * n) % mod ;	//4 - 16
		if (k == 1) {
			cout << (firstN) % mod << "\n";
		} else {
			firstN = (firstN + (n - 1) % mod) % mod;
			long long int jumps = (k - 1) / 2;
			if (jumps != 0) {
				long long int f = 2 * n + 2;	//f=4, l=4
				long long int l = f + (jumps - 1) * 2;
				firstN = firstN + ((jumps * (f + l)) / 2) % mod;
				firstN = firstN % mod;
			}
			if ((k - 1) % 2 == 0) {
				firstN = ((firstN - n + 1) % mod + mod) % mod;
			} else {
				firstN = (firstN + n + 1) % mod;
			}
			cout << (firstN) % mod << "\n";
		}

	}
	return 0;
}