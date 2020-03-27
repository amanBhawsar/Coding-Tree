#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main() {
	FASTIO
	long long int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		string s;
		for(int i=0;i<n;i++){
			s.push_back('a');
		}
		int a,b,l=1,z=2;
		a=n-2,b=n-1;
		while(l+z<=k){
			a--;
			b--;
			l=l+z;
			z++;
		}
		for(int i=l;i<k;i++){
			if(b-a==1){
				a--;
				b=n-1;
			}else{
				b--;
			}
		}
		s[a]='b';
		s[b]='b';
		cout << s << endl;
	}
	return 0;
}