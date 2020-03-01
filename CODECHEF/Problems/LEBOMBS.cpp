#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,safe=0;
	    cin >> n;
	    string s;
	    cin >> s;
	    int one=0,zero=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            s[i]='2';
	            if(i!=0){
	                s[i-1]='2';
	            }
	            if(i!=n-1 && s[i+1]!='1'){
	                s[i+1]='2';
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(s[i]!='2'){
	            safe++;
	           // cout << i << " ";
	        }
	    }
	    cout << safe << endl;
	}
	return 0;
}
