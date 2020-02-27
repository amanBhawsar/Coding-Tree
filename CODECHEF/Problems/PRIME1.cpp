#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    for(int i=a;i<=b;i++){
	        int f=0,n=sqrt(i);
	        for(int j=2;j<=n;j++){
	            if(i%j==0){
	                f=1;
	                break;
	            }
	        }
	        if(f!=1 && i!=1){
	            cout << i << endl;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
