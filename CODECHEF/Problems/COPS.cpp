#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int house[101]={0};
	    int m,x,y;
	    cin >> m >> x >> y;
	    x=x*y;
	    int arr[m];
	    for(int i=0;i<m;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<m;i++){
	        for(int j=max(arr[i]-x,0) ;j<=min(100,arr[i]+x);j++){
	            house[j]=1;
	        }
	    }
	    int ans=0;
	    for(int i=1;i<=100;i++){
	        if(!house[i]){
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
