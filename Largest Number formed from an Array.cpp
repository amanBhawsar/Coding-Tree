#include<bits/stdc++.h>
using namespace std;

bool compare(string s1,string s2){
    return (stoi(s1+s2)>stoi(s2+s1));
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string temp;
	    vector<string> s;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        s.push_back(temp);
	    }
	    sort(s.begin(),s.end(),compare);
	    for(int i=0;i<n;i++){
	        cout<<s[i];
	    }
	    cout << endl;
	}
	return 0;
}