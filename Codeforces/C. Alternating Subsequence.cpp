#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	long long int t;
	cin >> t;
	while(t--){
		long long int n,sum=0,mini,z,neg=0,ans=0;
		cin >> n;
		int f=0;
		for(int i=0;i<n;i++){
			cin >> z;
			f=0;
			if(i!=0){
				if(neg==0 && z<0){
					ans+=mini;
					mini=z;
					neg=1;
				}else if(neg==1 && z<0){
					mini=max(mini,z);
					f=1;
				}else if(neg==0 && z>0){
					mini=max(mini,z);
					f=1;
				}else if(neg==1 && z>0){
					ans+=mini;
					mini=z;
					neg=0;
				}
			}else{
				if(z<0){
					neg=1;
					mini=z;
					f=1;
				}else{
					mini=z;
					f=1;
				}
			}
		}
			ans+=mini;
		cout << ans << "\n";
		
	}
	return 0;
}