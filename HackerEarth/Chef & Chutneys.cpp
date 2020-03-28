#include <bits/stdc++.h>
using namespace std;
 
int n,q,ans=0;
string k;
vector<string> str;
int a,l,r;
bool var;
 
bool check(string s){
    int freq[26] = {0};
	int odd=0;
    for (int i = 0; i < s.length(); i++) 
        freq[s[i] - 'a']++; 
    for (int i = 0; i < 26; i++) 
        if (freq[i] % 2 == 1) 
        	odd++;
	if(odd>=2)
		return false;
    return true; 
} 
 
void isAns(int index, string curr){
	if (index > r) 
		return; 
	var = check(curr);
	// cout << curr << endl;
	if(curr==""){
		var=false;
	}
	if(var==true){
		ans++;
	}
	for (int i = index + 1; i < r; i++) {
		curr += str[i]; 
		isAns(i, curr);
		curr = curr.erase(curr.size() - str[i].size()); 
	} 
	return; 
}
 
int main() {
	cin >> n >> q;
	for(int i=0;i<n;i++){
		cin >> k;
		str.push_back(k);
	}
	while(q--){
		cin >> a;
		ans=0;
		if(a==1){
			cin >> a >> k;
			str[a-1]=k;
		}else{
			cin >> l >> r;
			isAns(l-2,"");
			cout << ans << endl;
		}
	}
	return 0;
}