#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int a=0,complA=0;
	    string s;
	    cin >> s;
	    for(int i=0;i<s.length();i++){
	        if((s[i]=='1') && (i%2==0)){
	            complA++;
	        }else if(s[i]=='1' && i%2==1){
	            a++;
	        }
	    }
	    if(abs(a-complA)%3==0){
	        cout << 1 << endl;
	    }else{
	        cout << 0 << endl;
	    }
	}
	return 0;
}