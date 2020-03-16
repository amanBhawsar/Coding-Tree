#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,m;
	    unordered_map<int,int> umap;
	    cin >> n >> m;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    for(int i=0;i<n;i++){
	        umap[a[i]]=umap[a[i]]+b[i];
	    }
	    int mini=INT_MAX;
	    for (auto x : umap)
	        mini=min(mini,x.second);
	    
	    cout << mini << endl;
	}
	return 0;
}
