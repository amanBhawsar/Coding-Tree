#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int ans=0;
	    string str;
	    stack <int> s;
	    s.push(-1);
	    cin >> str;
	    for(int i=0;i<str.length();i++){
	        if(str[i]=='('){
	            s.push(i);
	        }else{
	            s.pop();
	            if(!s.empty()){
	                ans = max(ans,i-s.top());
	            }else{
	                s.push(i);
	            }
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}