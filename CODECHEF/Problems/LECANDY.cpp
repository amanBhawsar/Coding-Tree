#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,c,sum=0,k;
	    cin >> n >> c;
	    while(n--){
	        cin >> k;
	        sum+=k;
	    }
	    if(sum<=c){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
