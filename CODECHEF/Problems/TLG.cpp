#include <iostream>
using namespace std;

int main() {
	int k,ans,maxi=-1,c=0,d=0;
	cin >> k;
	while(k--){
	    int a,b;
	    cin >> a >> b;
	    c+=a;
	    d+=b;
	    if(abs(c-d)>maxi){
	        maxi=abs(c-d);
	        ans=c>d?1:2;
	    }
	}
	cout<<ans<<" "<<maxi<<endl;
	return 0;
}
