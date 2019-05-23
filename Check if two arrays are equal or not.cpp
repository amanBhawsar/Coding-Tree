#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,i,k,xr,sum1=0,sum2=0;
	    cin >> n;
	    cin >> k;
	    xr = k;
	    sum1+=k;
	    for(i=1;i<n;i++){
	        cin >> k;
	        xr^=k;
	        sum1+=k;
	    }
	    for(i=0;i<n;i++){
	        cin >> k;
	        xr^=k;
	        sum2+=k;
	    }
	    if((xr==0) && (sum1==sum2)){
	        cout << "1" << endl;
	    }
	    else{
	        cout << "0" << endl;
	    }
	}
	return 0;
}