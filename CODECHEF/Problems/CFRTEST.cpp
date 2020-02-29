#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k,ans=0;
	    cin >> n;
	    int a[101]={0};
	    while(n--){
	        cin >> k;
	        a[k]++;
	    }
	    for(int i=1;i<=100;i++){
	        if(a[i]>0){
	            ans++;
	        }   
	    }
	    cout << ans << endl;
	}
	return 0;
}
