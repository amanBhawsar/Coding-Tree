#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    string s1,s2;
	    cin >> s1 >> s2;
        if(s1.find(s2) == string::npos){
            cout << 0 << endl;
    	}else{
            cout << 1 << endl;
    	}
	}
	return 0;
}
