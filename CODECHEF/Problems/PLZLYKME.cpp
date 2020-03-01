#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long l,d,s,c,last=0;
	    cin >> l >> d >> s >>c;
	    int f=0;
	    d--;
	    while(d--){
	        s=s+c*s;
	        if(s>=l){
	            f=1;
	            break;
	        }
	    }
	    if(s>=l){
	        f=1;
	    }
	    cout << (f==1?"ALIVE AND KICKING":"DEAD AND ROTTING") << endl;
	}
	return 0;
}
