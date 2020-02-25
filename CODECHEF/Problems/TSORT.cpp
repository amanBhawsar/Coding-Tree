#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
	int t;
	cin >> t;
	while(t--){
	    int k;
	    cin >> k;
	    v.push_back(k);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
	    cout << v[i] << endl;
	}
	return 0;
}
