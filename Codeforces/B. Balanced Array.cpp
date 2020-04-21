#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	long long int t;
	cin >> t;
	while(t--){
		long long int n,even=2,sum=0;
		cin >> n;
		vector<long long int> v(n,0);
		for(int i=0;i<v.size()/2;i++){
			sum+=even;
			v[i]=even;
			even+=2;
		}
		even=1;
		for(int i=v.size()/2;i<n-1;i++){
			sum-=even;
			v[i]=even;
			even+=2;
		}
		if(sum%2==1 && sum>=even){
			v[n-1]=sum;
			cout << "YES" << "\n";
			for(int i=0;i<v.size();i++){
				cout << v[i] << " ";	
			}
			cout << "\n";
		}else{
			cout << "NO" << "\n";
		}
	}
	return 0;
}