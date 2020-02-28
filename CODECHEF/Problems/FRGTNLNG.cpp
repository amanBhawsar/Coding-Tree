#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    vector<string> vec;
	    unordered_map<string,int> umap;
	    string z;
	    int n,k;
	    cin >> n >> k;
	    while(n--){
	        cin >> z;
	        vec.push_back(z);
	    }
	    while(k--){
	        cin >> n;
	        while(n--){
	            cin >> z;
	            umap[z]=1;
	        }
	    }
	    for(int i=0;i<vec.size();i++){
	        if (umap.find(vec[i]) == umap.end()){
	            cout << "NO" << " ";
	        }else{
	            cout << "YES" << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
