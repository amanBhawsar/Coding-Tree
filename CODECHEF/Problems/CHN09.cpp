#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int a=0,b=0;
	    string s;
	    cin >> s;
	    for(int i=0;i<s.size();i++){
	        s[i]=='a'?a++:b++;
	    }
	    cout << min(a,b) << endl;
	}
	return 0;
}
