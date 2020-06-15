#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

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

void sieveOfEratosthenes();// bool sieve[1000001]={0}; move it globally

int bSearch(vector<int>& nums, int target);

int32_t main()
{
	FASTIO;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n, l = 1, r, b;
	char ch = 'a', prev;
	bool flag = false;
	cin >> n;
	r = n;
	cout << 1 << endl;
	cin >> ch;
	if (ch == 'E' ) {
		return 0;
	}
	bool lie = false;
	if (ch == 'L') { //is lying
		lie = true;
	} else {
		lie = false;
	}
	int q=150;
	while (1) {
		flag = false;
		b = l + (r - l) / 4;
		if (lie) { // truth next
			cout << b << endl;
			cin >> ch;q--;
			if (ch == 'L' ) {
				r = b - 1;
			} else if (ch == 'G' ) {
				l = b + 1;
			} else {
				return 0;
			}
			lie = false;
		}
		while (!lie) {
			cout << 1 << endl;
			cin >> ch;q--;
			if (ch == 'L') { //is lying
				lie = true;
				break;
			} else {
				lie = false;
			}
			if(q==0){
			    break;
			}
		}
        if(q==0){
		    break;
		}
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

//for bitwise and between n & m inclusive for(n>=m)
// int rangeBitwiseAnd(int m, int n)
// {
// 	while (n > m) {
// 		n = n & (n - 1);
// 	}
// 	return n;
// }
