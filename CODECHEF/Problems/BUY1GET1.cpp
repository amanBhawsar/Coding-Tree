#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
	    string s;
	    cin >> s;
	    int a[26]={0};
	    int A[26]={0};
	    for(int i=0;i<s.size();i++){
	        s[i]<'a'?A[s[i]-'A']++:a[s[i]-'a']++;
	    }
	    int ans=0;
	    for(int i=0;i<26;i++){
	        ans+=(a[i]+1)/2;
	        ans+=(A[i]+1)/2;
	    }
	    cout << ans << endl;
	}
	return 0;
}
