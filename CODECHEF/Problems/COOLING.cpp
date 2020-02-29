#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];   
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    int i=n-1,j=n-1,ans=0;
	    while(i!=-1 && j!=-1){
	        if(a[i]>b[j]){
	            i--;
	        }else{
	            ans++;
	            i--;
	            j--;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
