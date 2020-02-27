#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long n,c=0;
	    cin >> n;
	    string str;
	    cin >> str;
	    for(int i=0;i<n;i++){
	        if(str[i]=='1'){
	            c++;
	        }
	    }
	    cout << (c*(c+1))/2 << endl;
	}
	return 0;
}
