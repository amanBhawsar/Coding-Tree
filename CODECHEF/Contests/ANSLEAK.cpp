#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,m,k;
	    cin >> n >> m >> k;
	    int arr[k+1][n+1];
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=k;j++){
	            cin >> arr[j][i];
	        }
	    }
	    vector<int> trick;
	    int maxi=0,maxOption=0,ind;
	    for(int j=1;j<=n;j++){
	        unordered_map<int,int> umap;
	        for(int i=1;i<=k;i++){
	            umap[arr[i][j]]++;
	        }
	        trick.clear();
	        for(auto k:umap){
	            if(k.second>maxi){
	                maxOption=k.first;
	                trick.clear();
	                trick.push_back(maxOption);
	            }else if(k.second==maxi){
	                trick.push_back(k.first);
	            }
	        }
	        if(trick.size()==1){
	            cout << maxOption << " ";
	        }else{
	            if(k-2>0)
	                cout << k-2 << " ";
	            else
	                cout << k << " ";
	        }
	    }
	    cout << "\n";
	}
	return 0;
}
