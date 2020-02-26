#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string s1,s2;
	    cin >> s1;
	    s2=s1;
	    reverse(s2.begin(), s2.end());
	    if(s1==s2 && s1[0]!='0'){
	        cout << "wins" << endl;
	    }else{
	        cout << "losses" << endl;
	    }
	}
	return 0;
}
