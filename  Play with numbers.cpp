#include <iostream>

using namespace std;

int main() {
	long int n,q,l,r,s=0,temp;
	cin >> n >> q;
	long int sum[n];
	for(long int i=0;i<n;i++){
	    cin >> temp;
	    s+=temp;
	    sum[i]=s;
	}
	while(q--){
	    cin >> l >> r;
	    if(l==1){
	        cout << sum[r-1]/(r) << endl;
	    }
	    else{
	        cout << (sum[r-1]-sum[l-2])/(r-l+1) << endl;
	    }
	}
	return 0;
}
