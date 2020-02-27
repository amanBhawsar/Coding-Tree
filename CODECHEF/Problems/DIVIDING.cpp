#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,sum=0;
	cin >>n;
	for(int i=0;i<n;i++){
	    cin >> k;
	    sum += k;
	}
	if(2*sum == n*(n+1)){
	    cout << "YES" << endl;
	}else{
	    cout << "NO" << endl;
	}
	return 0;
}
