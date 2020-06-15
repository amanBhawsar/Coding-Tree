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
#define lb(v,val)       lower_bound(v.begin(),v.end(),val) - v.begin()  //first equal to or lower than [------------
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

int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
// ROTATION
// rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());
// rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end());
// min({ 1, 2, 3, 4, 5, 0, -1, 7 }  min can be used to find min of multiple values like this

void sieveOfEratosthenes();// bool sieve[1000001]={0}; move it globally

int bSearch(vector<int>& nums, int target);

bool isOne(int a, int b, int c, int d, int e, int f)
{
	vector<pair<int, int>> v;
	if (a != d) {
		v.push_back({a, d});
	}
	if (b != e) {
		v.push_back({b, e});
	}
	if (c != f) {
		v.push_back({c, f});
	}
	bool ans = true;
	if (v.size() <= 1) {
		return true;
	} else {
		//addition logic
		int diff = v[0].first - v[0].second;
		for (int i = 0; i < v.size(); i++) {
			if (diff == v[i].first - v[i].second) {

			} else {
				ans =  false;
				break;
			}
		}
		if (ans) {
			return ans;
		}

		//multiplication logic
		int gc = 0;
		if (v[0].first != 0 && v[0].second % v[0].first == 0) {
			gc = v[0].second / v[0].first;
			// cout << gc << " ";
		} else {
			return false;
		}
		for (int i = 1; i < v.size(); i++) {
			if (v[i].second == gc * v[i].first) {

			} else {
				return false;
			}
		}
	}
	return true;
}

bool isTwo(int a, int b, int c, int d, int e, int f)
{
	vector<pair<int, int>> v;
	if (a != d) {
		v.push_back({a, d});
	}
	if (b != e) {
		v.push_back({b, e});
	}
	if (c != f) {
		v.push_back({c, f});
	}
	bool ans = true;
	if (v.size() == 2) {
		return true;
	} else {
		//first add then mul  +  first mul then add   validate if WA comes
		if ((a - b) != 0 && (b - c) != 0 && (d - e) % (a - b) == 0 && (e - f) % (b - c) == 0 && (d - e) / (a - b) == (e - f) / (b - c)) {
			// cout << "amsn";
			return true;
		}
		if (isOne(a, b, c, d, e, c)) {  //two can be converted using one operation
			return true;
		} else if (isOne(b, c, c, e, f, c)) {
			return true;
		} else if (isOne(c, a, c, f, d, c)) {
			return true;
		}


		else if (isOne(0, 0, 0, d, e, f)) { // zero case (12,113,112) -> (-100,0,-12)
			return true;
		} else if (isOne(a, 0, 0, d, e, f)) {
			return true;
		} else if (isOne(0, b, 0, d, e, f)) {
			return true;
		}
		if (isOne(0, 0, c, d, e, f)) {
			return true;
		}

		else if (isOne(a  - (a - d), b - (a - d), c - (a - d), d, e, f)) { //add mul combination
			return true;
		} else if (isOne(a  - (a - d), b - (a - d), c, d, e, f)) { //add mul combination
			return true;
		} else if (isOne(a  - (a - d), b, c - (a - d), d, e, f)) { //add mul combination
			return true;
		}



		else if (isOne(a - (b - e), b - (b - e), c - (b - e), d, e, f)) { // ab de
			return true;
		} else if (isOne(a - (b - e), b - (b - e), c , d, e, f)) { // ab de
			return true;
		} else if (isOne(a , b - (b - e) , c - (b - e), d, e, f)) { // ab de
			return true;
		}




		else if (isOne(a - (c - f), b - (c - f), c - (c - f), d, e, f)) { // ab de
			return true;
		} else if (isOne(a - (c - f), b, c - (c - f), d, e, f)) { // ab de
			return true;
		} else if (isOne(a, b - (c - f), c - (c - f), d, e, f)) { // ab de
			return true;
		}




		else if (isOne(a, b, c, d - (d - a), e - (d - a), f - (d - a))) { // ab de
			return true;
		} else if (isOne(a, b, c, d, e - (d - a), f - (d - a))) { // ab de
			return true;
		} else if (isOne(a, b, c, d - (d - a), e, f - (d - a))) { // ab de
			return true;
		} else if (isOne(a, b, c, d - (d - a), e - (d - a), f)) { // ab de
			return true;
		}

		else if (isOne(a, b, c, d - (e - b), e - (e - b), f - (e - b))) { // ab de
			return true;
		} else if (isOne(a, b, c, d, e - (e - b), f - (e - b))) { // ab de
			return true;
		} else if (isOne(a, b, c, d - (e - b), e, f - (e - b))) { // ab de
			return true;
		} else if (isOne(a, b, c, d - (e - b), e - (e - b), f)) { // ab de
			return true;
		}

		else if (isOne(a, b, c, d - (f - c), e - (f - c), f - (f - c))) { // ab de
			return true;
		} else if (isOne(a, b, c, d, e - (f - c), f - (f - c))) { // ab de
			return true;
		} else if (isOne(a, b, c, d - (f - c), e, f - (f - c))) { // ab de
			return true;
		} else if (isOne(a, b, c, d - (f - c), e - (f - c), f)) { // ab de
			return true;
		}

		else {
			vector<int> diff;
			vector<int> mult;
			for (int i = 0; i < v.size(); i++) {
				diff.push_back(v[i].first - v[i].second);
				if (v[i].first != 0 && v[i].second % v[i].first == 0) {
					mult.push_back(v[i].second / v[i].first);
				}
			}
			sort(all(diff));
			if (mult.size() == 3) {
				sort(all(mult));
				// cout << mult[0] << " " << mult[1] << " " << mult[2] << "\n";
				if (mult[0]*mult[1] == mult[2]) {
					return true;
				} else if (mult[0] == mult[1] || mult[1] == mult[2] || mult[0] == mult[2]) {
					return true;
				}
			}
			if (diff[0] + diff[1] == diff[2] || diff[1] + diff[2] == diff[0]) {
				return true;
			}
			int gc;
			for (int i = 0; i < v.size(); i++) {
				if (v[i].first != 0 && v[i].second % v[i].first == 0) {
					gc = v[i].second / v[i].first;
					if (i == 0) {
						if (isOne(a * gc, b * gc, c, d, e, f)) {
							return true;
						}
						if (isOne(a * gc, b * gc, c * gc, d, e, f)) {
							return true;
						}
						if (isOne(a * gc, b, c * gc, d, e, f)) {
							return true;
						}
					} else if (i == 1) {
						if (isOne(a * gc, b * gc, c, d, e, f)) {
							return true;
						}
						if (isOne(a, b * gc, c * gc, d, e, f)) {
							return true;
						}
						if (isOne(a * gc, b * gc, c * gc, d, e, f)) {
							return true;
						}
					} else {
						if (isOne(a * gc, b * gc, c * gc, d, e, f)) {
							return true;
						}
						if (isOne(a, b * gc, c * gc, d, e, f)) {
							return true;
						}
						if (isOne(a * gc, b, c * gc, d, e, f)) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

int32_t main()
{
	FASTIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t) {
		int a, b, c, d, e, f;
		cin >> a >> b >> c;
		cin >> d >> e >> f;
		// a = rand() % 20 - 10;
		// b = rand() % 20 - 10;
		// c = rand() % 20 - 10;
		// d = rand() % 20 - 10;
		// e = rand() % 20 - 10;
		// f = rand() % 20 - 10;
		// cout << a << " " << b << " " << c << "\n";
		// cout << d << " " << e << " " << f << "\n";
		if (a == d && b == e && c == f) {
			cout << "0\n";
		} else if (isOne(a, b, c, d, e, f)) {
			cout << "1\n";
		} else if (isTwo(a, b, c, d, e, f)) {
			cout << "2\n";
		} else {
			cout << "3\n";
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


//  1 3 7
//  7 11 20