#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	int t;
	cin >> t;
	for(int z=1;z<=t;z++){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int ans=0;
	    for(int i=1;i<n-1;i++){
	        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
	            ans++;
	    }
	    cout << "Case #"<<z<< ": " << ans << "\n";
	}
	return 0;
}