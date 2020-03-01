#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    unordered_map<string, int> umap;
	    string s;
	    int z;
	    for(int i=0;i<4;i++){
	        cin >> s;
	        cin >> z;
	        umap[s] = z;
	    }
	    
	    if(umap["Barcelona"] > umap["Eibar"] && umap["RealMadrid"]<umap["Malaga"])
	        cout << "Barcelona" << endl;
	    else
	        cout << "RealMadrid" << endl;
	    
	}
	return 0;
}
