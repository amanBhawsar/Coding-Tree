#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    unsigned long long n;
	    cin>>n;
	    if(n%5){
	        cout << n%5 << endl;
	    }else{
	        cout << "-1" << endl;
	    }
	}
	return 0;
}