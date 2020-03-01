#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int ans=0;
	    string s;
	    cin >>s;
	    for(int i=0;i<s.size();i++){
	        if(s[i]!='4' && s[i]!='7')
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}
