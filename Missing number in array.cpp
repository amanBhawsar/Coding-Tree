#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    unsigned long n,sum,temp;
	    cin>>n;
	    sum=(n*(n+1))/2;
	    n--;
	    while(n--){
	        cin>>temp;
	        sum-=temp;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}