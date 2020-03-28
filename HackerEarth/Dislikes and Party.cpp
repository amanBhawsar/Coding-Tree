#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n,z,ans=0,k;
	cin >> n;
	unordered_map<int, set<int>> umap;
	for(int i=1;i<=10;i++){
		cin >> k;
		for(int j=2;j<=10;j++){
			cin >> z;
			umap[k].insert(z);
			umap[z].insert(k);
		}
	}	
	for(auto i:umap){
		if(umap[i.first].size()<n)
			ans+=n-umap[i.first].size()-1;
	}
	long long int mpsize=umap.size();
	if(n>mpsize){
		ans+=(n-1)*(n-mpsize);
	}
	cout << ans/2 << endl;
}