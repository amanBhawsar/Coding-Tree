#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin >> s;
	    int c=0,ans=0,min=0;
	    for(int i=0;i<s.size();i++){
	        if(c%2==0){
	            c++;
	            if(s[i]=='0'){
	                ans++;
	            }
	        }else{
	            c++;
	            if(s[i]=='1'){
	                ans++;
	            }
	        }
	    }
	    min = ans;
	    ans=0;c=0;
	    for(int i=0;i<s.size();i++){
	        if(c%2==0){
	            c++;
	            if(s[i]=='1'){
	                ans++;
	            }
	        }else{
	            c++;
	            if(s[i]=='0'){
	                ans++;
	            }
	        }
	    }
	    if(min>ans){
	        min=ans;
	    }
	    cout << min <<endl;
	}
	return 0;
}