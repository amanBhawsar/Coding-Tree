#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	int t;
	cin >> t;
	while(t--){
		string s;
		long long int n,ans=INT_MAX,i,j;
		cin >> n >> s;
		for(i=0;i<n;i++){
			if(s[i]!='A'){
				break;
			}
		}
		for(j=n-1;j>=0;j--){
			if(s[j]!='B'){
				break;
			}
		}
		if(i>j){
			ans=0;
		}else{
			long long int countA=0,countB=0;
			unordered_map<long long int,long long int> umapB;
			for(int k=j;k>=i;k--){
				if(s[k]=='B'){
					countB++;
				}
				umapB[k]=countB;
			}
			unordered_map<long long int,long long int> umapA;
			for(int k=i;k<=j;k++){
				if(s[k]=='A'){
					countA++;
				}
				umapA[k]=countA;
			}
			for(int k=i;k<=j;k++){
				long long int op=0;
				op=(j+1-k-umapB[k])+(k-i-umapA[k]);
				ans=min(ans,op);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}