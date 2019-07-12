#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    if (a.find(b) != string::npos) {
            cout << "found" << endl;
        }else{
            cout << "not found" << endl;
        }
	}
	return 0;
}