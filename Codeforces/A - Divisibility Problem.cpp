#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main() {
	FASTIO
	long long int t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << (b- a%b)%b << endl;
	}
	return 0;
}