#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
	FASTIO
	int t;
	cin >> t;
	while(t--){
		long long int n,ans=0;
		int m;
		char c;
		cin >> n >> m >> c;
		vector<int> v(16,0);
		for(int i=15;i>=0;i--){
			v[i]=n%2;
			n=n/2;
			if(n==0)
				break;
		} 
		if(c=='L'){
			rotate(v.begin(), v.begin()+m, v.end());
		}else{
			rotate(v.begin(), v.begin()+v.size()-m, v.end());
		}
		for(int i=0;i<=15;i++){
			ans=ans*2+v[i];
		}

		cout << ans << "\n";
	}
	return 0;
}