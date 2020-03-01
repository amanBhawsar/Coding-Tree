#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k,c=0;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        if(a[i]%2==0){
	            c++;
	        }
	    }
	    if(c==n && k==0)
	        cout<<"NO"<<endl;
	    else if(c>=k)
	        cout<<"YES"<<endl;
	    else 
	        cout<<"NO"<<endl;
	}
	return 0;
}
