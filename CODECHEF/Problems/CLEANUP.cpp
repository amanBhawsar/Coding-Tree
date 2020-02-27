#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    set<int> done;
	    set<int> total;
	    int n,d,k;
	    cin >> n >> d;
	    for(int i=0;i<d;i++){
	        cin >> k;
	        done.insert(k);
	    }
	    for(int i=1;i<=n;i++){
	        total.insert(i);
	    }
	    set<int> result;
        set_difference(total.begin(),total.end(),done.begin(),done.end(),inserter(result, result.begin()));
        vector<int> vec;
        vec.assign(result.begin(), result.end());
	    for(int i=0;i<vec.size();i+=2){
	        cout << vec[i] << " ";
	    }
	    cout << endl;
	    for(int i=1;i<vec.size();i+=2){
	        cout << vec[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
