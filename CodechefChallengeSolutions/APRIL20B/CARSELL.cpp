#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    long long sum=0,m=1000000007;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n,greater<int>());
	    long long k=0,c=0;
	    for(int i=0;i<n;i++)
	    {
	        a[i]=a[i]-i;
	        if(a[i]<=0)
	        {break;}
	       sum=(sum%m+a[i]%m)%m;
	    }
	    cout<<sum%m<<"\n";
	}
}