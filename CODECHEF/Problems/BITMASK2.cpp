#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,ans=0;
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
	        ans += a[i]*b[j];
	    }
	    cout << ans << endl;
	}
	return 0;
}
