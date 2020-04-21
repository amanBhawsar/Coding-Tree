#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	long long int t,p=2;
	cin >> t;
	vector<long long int> v;
	while(p<=1000000000){
		p*=2;
		v.push_back(p-1);
	}
	while(t--){
		long long int n;
		cin >> n;
		for(int i=0;i<v.size();i++){
			// cout << v[i] << " ";
			if(n%v[i]==0){
				cout << n/v[i]  << "\n";
				break;
			}
		}
	}
	return 0;
}