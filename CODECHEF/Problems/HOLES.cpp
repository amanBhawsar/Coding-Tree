#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        string s;
	    cin>>s;
	    int count =0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='A'||s[i]=='P'||s[i]=='Q'||s[i]=='O'||s[i]=='D'||s[i]=='R'){
	            count++;
	        }
	        if(s[i]=='B'){
	           count=count+2;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
