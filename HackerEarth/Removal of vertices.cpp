#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

unordered_map<long long int,long long int> umap;
long long int findPos(long long int n){
	if(umap[n]!=0){
		return umap[n];
	}
	long long int ans = (n%2==0?2*findPos(n/2)-1:2*findPos((n-1)/2)+1);
	umap[n]=ans;
	return ans;
}

int main() {
	FASTIO
	int t;
	umap[1]=1;
	cin >> t;
	while(t--){
		long long int n,k,i=2;
		cin >> n >> k;
		k*=2;
		i=i+k;
		if(i>n){
			i=(i-1)%n+1;
		}
		if(i==1){
			i=n;
		}else{
			i--;
		}
		i+=findPos(n)-1;
		cout << (i>n?(i-1)%n+1:i) << "\n";

	}	
	return 0;
}