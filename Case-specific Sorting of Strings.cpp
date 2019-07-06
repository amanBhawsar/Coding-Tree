#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string str;
	    cin>>n;
	    vector<char> s;
	    vector<char> c;
	    cin >> str;
	    for(int i=0;i<str.length();i++){
	        if(str[i]>='a' && str[i]<='z'){
	            s.push_back(str[i]);
	        }else{
	            c.push_back(str[i]);
	        }
	    }
	    sort(s.begin(),s.end());
	    sort(c.begin(),c.end());
	    int j=0,k=0;
	    for(int i=0;i<str.length();i++){
	        if(str[i]>='a' && str[i]<='z'){
	            cout << s[j++];
	        }else{
	            cout << c[k++];
	        }
	    }
	    cout << endl;
	}
	return 0;
}