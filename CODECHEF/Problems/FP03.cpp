#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        string s;
        cin >> s;
        int n=s.size(),ans=0,f=0;
	    for(int i=0;i<n;i++){
	        ans=10*ans+(s[i]-'0');
	        f++;
	        if(f==5){
	            ans=ans%17;
	            f=0;
	        }
	    }
	    cout << (ans%17==0?"YES":"NO") << endl;
	}
	return 0;
}
