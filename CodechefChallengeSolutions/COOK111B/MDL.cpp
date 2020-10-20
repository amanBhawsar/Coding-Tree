#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	long n,i,k,l,t;
	cin>>t;
	while(t--)
	{ long c=0,d=0;
	    cin>>n;
	    long a[n];
	    for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    }
	    k=*min_element(a,a+n);
	    l=*max_element(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==k)
	        c=i;
	        else if (a[i]==l)
	        d=i;
	    }
	    if(c<d)
	    cout<<k<<" "<<l<<endl;
	    else
	    cout<<l<<" "<<k<<endl;
	    
	}
}
