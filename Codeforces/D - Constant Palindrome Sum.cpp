#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
	FASTIO
	int t;
	cin >>t;
	while(t--){
		long long int n,k,mini,maxi,minUpdates=INT_MAX,ans;
		cin >>n >>k;
		vector<long long int> v(n,0);
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		unordered_map<long long int,long long int> umap;
		for(int i=0;i<n/2;i++){
			umap[v[i]+v[n-i-1]]++;	//for zero updates
		}
		vector<long long int> pre(2*k+1,0);
		for(int i=0;i<n/2;i++){		//for atmost 1 updates
			mini=min(v[i],v[n-i-1])+1;
			maxi=max(v[i],v[n-i-1])+k;
			if(mini>=0 && mini<=2*k){
				pre[mini]+=1;
			}
			if(maxi+1>=0 && maxi+1<=2*k){
				pre[maxi+1]-=1;
			}
		}
		for(int i=1;i<=2*k;i++){
			pre[i]+=pre[i-1];
		}
		
		for(int i=2;i<=2*k;i++){	//for pair sum = i
			ans=(pre[i]-umap[i])+(n/2 - pre[i])*2;
			minUpdates=min(minUpdates,ans);
		}
		cout << minUpdates << "\n";
	}
	return 0;
}