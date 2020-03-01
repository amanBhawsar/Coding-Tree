#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
        cout << ((360%n==0)?"y ":"n ");
        cout << ((n<=360)?"y ":"n ");
        cout << ((n<27)?"y ":"n ");
        cout << endl;
	}
	return 0;
}
