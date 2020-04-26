#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	long long int n,m,val;
	cin >> n >> m;
	vector<long long int> a(n,0);
	vector<long long int> b(m,0);
	vector<long long int> c(m,0);
	for(long long int i=0;i<n;i++)
		cin >> a[i];
	for(long long int i=0;i<m;i++)
		cin >> b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(a[a.size()-1]>b[b.size()-1]){
		cout << "-1";
	}else{
		long long int maxi=0,count=1;
		for(int z=a.size()-1;z>=0;z--){
			val=lower_bound(b.begin(), b.end(), a[z])-b.begin();
			c[val]++;
		}
		for(int i=c.size()-2;i>=0;i--){
			c[i]+=c[i+1];
		}
		for(int i=c.size()-1;i>=0;i--){
			maxi=max(maxi,(long long int)ceil(c[i]/(count*1.0)));
			count++;
		}
		cout << 2*maxi-1 << "\n";
	}
	return 0;
}