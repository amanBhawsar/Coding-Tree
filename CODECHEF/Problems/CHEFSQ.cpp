#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    cin >> k;
	    int b[k];
	    for(int i=0;i<k;i++){
	        cin >> b[i];
	    }
	    int i,j=0;
	    for(i=0;i<n;i++){
	        if(a[i]==b[j]){
	            j++;
	        }
	        else if(j==k){
	            cout << "Yes" << endl;
                break;
	        }
	    }
	    if(i==n){
	        cout << "No" << endl;
	    }
	    
	}
	return 0;
}
