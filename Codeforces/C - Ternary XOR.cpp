#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main() {
	FASTIO
	long long int t,n;
	cin >> t;
	while(t--){
		int f=0;
		string s,a="1",b="1";
		cin >> n >> s;
		for(int i=1;i<n;i++){
			if(s[i]=='1'){
				if(f==1){
					a+='1';
					b+='0';
				}else{
					a+='0';
					b+='1';
					f=1;
				}
			}else if(s[i]=='2'){
				if(f==1){
					a+='2';
					b+='0';
				}else{
					a+='1';
					b+='1';
				}
			}else{
				a+='0';
				b+='0';
			}
		}
		
		cout << b << endl;
		cout << a << endl;
	}
	return 0;
}