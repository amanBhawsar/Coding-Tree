#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    string s1,s2;
	    cin >> s1 >> s2;
	    int arr[26]={0};
	    for(int i=0;i<s1.size();i++){
	        arr[s1[i]-'a']++;
	    }
	    for(int i=0;i<s2.size();i++){
	        arr[s2[i]-'a']--;
	    }
	    int f=0;
	    for(int i=0;i<26;i++){
	        if(arr[i]!=0){
	            f=1;
	            break;
	        }
	    }
	    cout << (f ? "NO":"YES") << endl;
	}
	return 0;
}
