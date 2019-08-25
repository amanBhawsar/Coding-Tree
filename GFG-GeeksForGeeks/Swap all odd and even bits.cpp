#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,odd,even,num=1,count=0;
	    cin>>n;
	    while(n!=0){
	        odd=n%2;
	       // cout<<odd<<endl;
	        n=n/2;
	       // cout<<n<<endl;
	        even=n%2;
	        n=n/2;
	       // cout<<even<<endl;
	        num+=even*(int)(pow(2, count) + 0.5);
	        count++;
	        num+=odd*(int)(pow(2, count) + 0.5);
	        count++;
	    }
	    cout << num-1<<endl;
	}
	return 0;
}   