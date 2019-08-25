#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,c=0,k=1;
	    cin>>n;
	   // while(n>=0){
	   //        n=n-k;
	   //        c++;k++;
	   // }
	   // cout << c-1 << endl;
	   cout << (int(-1+sqrt(1+8*n))/2) << endl;
	}
	return 0;
}