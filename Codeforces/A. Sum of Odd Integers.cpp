#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,k;
		cin >> n >> k;
		long long int temp=((k-1)*(k-1));
		if(n-temp>=2*k-1 && (n-temp)%2==1){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}