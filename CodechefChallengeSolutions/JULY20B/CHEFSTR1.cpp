#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    long long c=0;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]>a[i-1])
	        c+=a[i]-a[i-1]-1;
	        else
	        c+=a[i-1]-a[i]-1;
	    }
	    cout<<c;
	    cout<<"\n";
	}
	return 0;
}
