#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long n;
	    cin >> n;
	    long long a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    long long ans=1;
	    long long b[n];
	    b[n-1]=ans;
	    for(int i=n-2;i>=0;i--){
	        b[i] = a[i]*a[i+1] < 0 ? ++ans:ans=1;
	    }
	    for(int i=0;i<n;i++){
	        cout << b[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
