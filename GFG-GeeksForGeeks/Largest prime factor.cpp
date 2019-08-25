#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long n,i=1,gf=1;
	    cin>>n;
	    while(n%2==0){
	            gf=2;
	            n=n/2;  
	    }
	    for(i=3;i*i<=n;i=i+2){
	        while(n%i==0){
	            gf=i;
	            n=n/i;  
	        }
	    }
	    if(n>2){
	        gf=n;
	    }
	    cout << gf << endl;
	}
	return 0;
}