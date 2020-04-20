#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	int t;
	cin >> t;
	for(int z=0;z<t;z++){
	    string s,ans;
	    vector<int> v;
	    cin >> s;
	    int n=s.size(),init=0,k;
	    for(int i=0;i<n;i++)
	        v.push_back(s[i]-'0');
	    for(int i=0;i<n;i++){
	        if(init-v[i]==0){
	            
	        }else if(init-v[i]>0){
	            ans+=string(init-v[i],')');
	        }else{
	            ans+=string(v[i]-init,'(');
	        }
	        ans+=to_string(v[i]);
	        init=v[i];
	    }
	    init=0;
	    n=ans.size();
	    for(int i=0;i<n;i++){
	    	if(ans[i]=='(')
	    		init++;
	    	else if(ans[i]==')')
	    		init--;
	    }
	    ans+=string(init,')');
	    cout << "Case #"<<z+1 << ": " << ans << "\n";
	}
	return 0;
}