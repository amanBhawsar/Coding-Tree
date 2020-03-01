#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++)
		    cin>>a[i];
		int maxi=a[0];
		for (int i=1;i<n;i++){
			maxi=max(maxi,a[i]+i);
		}
		cout << maxi << endl;
	}
	return 0;
}
