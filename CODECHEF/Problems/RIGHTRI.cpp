#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,c=0;
	cin >>t;
	while(t--){
	    int x1,x2,x3,y1,y2,y3;
	    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	    if( (y2-y1)*(y2-y3) == -(x2-x1)*(x2-x3) || (y2-y1)*(y1-y3) == -(x2-x1)*(x1-x3) || (y3-y1)*(y2-y3) == -(x3-x1)*(x2-x3) ){
	        c++;
	    }
	}
	cout << c;
	return 0;
}
