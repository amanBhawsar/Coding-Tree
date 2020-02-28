#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    if(c>a && b==d)
            cout<<"right"<<endl;
        else if (c<a && b==d)
            cout<<"left"<<endl;
        else if(d>b && a==c)
            cout<<"up"<<endl;
        else if(d<b && a==c)
            cout<<"down"<<endl;
        else
            cout<<"sad"<<endl;
	}
	return 0;
}
