#include<bits/stdc++.h>
using namespace std;

string isSubseq(string s, string l){
	int j = 0;
	for(int i=0; i<l.length() && j<s.length(); i++)
		if(l[i] == s[j])
			j++;
	return (j==s.length()?"YES":"NO");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string m, w;
		cin >> m >> w;
		cout << (m.length()>w.length() ? isSubseq(w,m) : isSubseq(m,w))<<endl; 
	}
	return 0;
}