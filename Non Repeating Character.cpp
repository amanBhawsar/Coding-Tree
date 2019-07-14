#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,f=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    int hash[26]={0};
	    for(int i=0;i<n;i++){
	        hash[s[i]-'a']++;
	    }
	    for(int i=0;i<n;i++){
	        if(hash[s[i]-'a']==1){
	            f=1;
	            cout << s[i] << endl;
	            break;
	        }
	    }
	    if(f==0){
	        cout <<"-1" << endl;
	    }
	}
	return 0;
}