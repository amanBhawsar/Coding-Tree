#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    bool flag=true;
	    string s1,s2;
	    cin >> s1 >> s2;
	    for(int i=0;i<s1.size();i++){
	        if(s1[i]!=s2[i] && s1[i]!='?' && s2[i]!='?'){
	            flag = false;
	            break;
	        }
	    }
	    if(flag){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
