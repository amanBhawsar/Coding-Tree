#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,sum=0,res=INT_MAX;
	    cin>>n>>m;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    for(int i=0;i<n;i++)
	    {int sum=0;
	        for(int j=0;j<n;j++)
	        { 
	            if(a[i]==a[j])
	            {
	                sum+=b[j];
	            }
	        }
	        res=min(res,sum);
	    }
	    cout<<res<<endl;
	}
	return 0;
}
