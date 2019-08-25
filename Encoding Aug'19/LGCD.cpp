#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    unordered_map<int, int> umap;
	    
	    int n,c=0;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        umap[arr[i]]++;
	    }
	    
	    for(int i=0;i<n;i++){
	        c+=umap[2*arr[i]];
	    }
	    cout << c <<endl;
	}
	return 0;
}
