#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin >> s;
	    int a=0,b=0,c=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='a'){
	            a=1+2*a;
	        }else if(s[i]=='b'){
	            b=a+2*b;
	        }else{
	            c=b+2*c;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}