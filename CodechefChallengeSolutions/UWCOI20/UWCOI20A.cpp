#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int a[n],maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
		if(a[i]>maxi)
		{maxi=a[i];}
	}
	cout<<maxi<<endl;
}
	return 0;
}
