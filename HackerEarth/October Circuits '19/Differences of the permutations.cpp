#include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    cout << (fact(n)*n*(n-1))/2 << endl;
	}
	return 0;
}