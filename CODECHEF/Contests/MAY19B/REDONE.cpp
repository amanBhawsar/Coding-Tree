#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
int main() {
    vector<long> arr(1000000);
	long long  n,a,b,t;
	cin >> t;
	a = 1;
	arr[1]=1;
	for(long long  i=1;i<999999;i++){
	    b = i+1;
        a = (a + b + (a*b)%m)%m;
        arr[i+1]=a;
	}
	while(t--){
	    cin >> n;
	    if(n<999998){
	        cout << arr[n] << endl;
	        continue;
	    }
	    a = arr[999998];
	    for(long long i=999998;i<n;i++){
	        b = i+1;
	        a = (a + b + (a*b)%m)%m;
	    }
	    cout << a << endl;
	}
	return 0;
}
