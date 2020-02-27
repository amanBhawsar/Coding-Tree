#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    string a,b;
	    cin >> a >> b;
	    int aPrecious[26]={0};
	    int APrecious[26]={0};
	    for(int i=0;i<a.size();i++){
	        if(a[i]<'a'){
	            APrecious[a[i]-'A']++;
	        }else{
	            aPrecious[a[i]-'a']++;
	        }
	    }
	    int ans=0;
	    for(int i=0;i<b.size();i++){
	        if(b[i]<'a'){
	            if(APrecious[b[i]-'A']!=0){
	                ans++;
	            }
	        }else{
	            if(aPrecious[b[i]-'a']!=0){
	                ans++;
	            }
	        }	        
	    }
	    cout << ans << endl;
	}
	return 0;
}
