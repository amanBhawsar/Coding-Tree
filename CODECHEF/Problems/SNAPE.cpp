#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        int a,b;
        cin>>a>>b;
        cout << sqrt(b*b-a*a) << " " << sqrt(b*b+a*a) << endl;
	}
	return 0;
}
