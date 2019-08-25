#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,temp=0,te;
	    cin>>n;
	    while(n--){
	        cin>>te;
	        temp^=te;
	    }
	    cout<<temp<<endl;
	}
	return 0;
}