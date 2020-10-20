#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long a[n],c=0,c1=0;
	    for(int i=0;i<n;i++)
	  {  cin>>a[i];
	      if(a[i]%2==0)
	      c++;
	      else
	      c1++;
	  }

	    cout<<c*c1<<endl;
	}
	return 0;
}
