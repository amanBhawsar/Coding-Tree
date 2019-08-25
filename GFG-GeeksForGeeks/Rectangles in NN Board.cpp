#include <iostream>
using namespace std;
int main()
{
	unsigned long long int t,n,sq,rect;
	cin >> t;
	while(t--){
	    cin >> n;
	    sq=(n*(n+1)*(2*n+1))/6;
	    rect=(n*(n+1))/2;
	    rect=rect*rect;
	    rect=rect-sq;
	    cout << rect <<endl;
	}
	return 0;
}
