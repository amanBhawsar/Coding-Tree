#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define f(i,a,b) 		for(i=a;i<b;i++)
#define rep(i,n) 		f(i,0,n)
#define deb(x) 			cout << #x << "=" << x << "\n"
#define clr(x) 			memset(x, 0, sizeof(x))
#define tr(it, a) 		for(auto it = a.begin(); it != a.end(); it++)
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vpii             vector<pair<int,int>>
#define vi              vector<int>
#define mii             map<int,int>
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define prefixArr(v)	partial_sum(v.begin(),v.end(),pre.begin())
#define acc(arr)		accumulate(arr, arr+n, initSum)
#define all(cont)       cont.begin(), cont.end()
#define unique(a)       sort(all(a)) , (a).erase(unique((a).begin(), (a).end()),(a).end())
#define pqll_max        priority_queue<ll> // max heap. push(),pop(),top(),size(),empty()
#define pqll_min        priority_queue<ll,vector<ll>,greater<ll> >
#define lb(v,val)       lower_bound(v.begin(),v.end(),val) - v.begin()  //first equal to or greater than [------------
#define ub(v,val)       upper_bound(v.begin(),v.end(),val) - v.begin() //first greater than ------------)
#define bs(v,x)         binary_search(v.begin(),v.end(),x)  //boolean return type
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FASTIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define in(container)   for (auto &it : container) cin>>it;
#define out(container)  for (auto it : container) cout << it << " "; cout << "\n";

int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
// ROTATION
// rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());
// rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end());
// min({ 1, 2, 3, 4, 5, 0, -1, 7 }  min can be used to find min of multiple values like this

void sieveOfEratosthenes();// bool sieve[1000001]={0}; move it globally

int bSearch(vector<int>& nums, int target);

int32_t main()
{
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t) {
		int n, b, m;
		cin >> n >> b >> m;
		int arr[m];
		for (int i = 0; i < m; i++) {
			cin >> arr[i];
		}
		int ans = 0, bb = -1;
		for (int i = 0; i < m; i++) {
			if (bb == -1) {
				bb = arr[i] / b;
				bb *= b;
				ans++;
			} else {
				if (arr[i] >= bb && arr[i] <= bb + b - 1)
					continue;
				bb = arr[i] / b;
				bb *= b;
				ans++;
			}
			// cout << arr[i] << " " << bb << " \n";

		}
		// cout << bb << " ";
		// cout << ans << " ";
		cout << ans << "\n";
	}
	return 0;
}

void sieveOfEratosthenes()
{
	//DECLARE IT GLOBALLY ->
	bool sieve[1000001] = {0};
	sieve[0] = sieve[1] = 0;
	sieve[2] = 1;
	for (int i = 3; i <= 1000000; i += 2)
		sieve[i] = 1;
	int k = sqrt(1000000);
	for (int i = 3; i <= k; i += 2) {
		if (sieve[i] == 1) {
			for (int j = i * i; j <= 1000000; j += i)
				sieve[j] = 0;
		}
	}
	return;
}

int bSearch(vector<int>& nums, int target)
{
	int l = 0, r = nums.size() - 1, m;
	while (l <= r) {
		m = l + (r - l) / 2;
		if (nums[m] == target) {
			return m;
		} else if (nums[m] < target) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return -1;
}
struct hash_pair {
	template <class T1, class T2>
	size_t operator()(const pair<T1, T2>& p) const
	{
		auto hash1 = hash<T1> {}(p.first);
		auto hash2 = hash<T2> {}(p.second);
		return hash1 ^ hash2;
	}
};