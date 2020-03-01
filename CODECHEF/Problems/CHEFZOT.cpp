#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	int a[n];
	int prev=-1,ans=0;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	    if(a[i]==0){
	        ans=max(ans,i-prev-1);
	        prev=i;
	    }
	}
	ans=max(ans,n-prev-1);
	cout << ans << endl;
	return 0;
}
