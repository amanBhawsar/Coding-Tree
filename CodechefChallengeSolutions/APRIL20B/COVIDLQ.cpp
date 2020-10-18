#include <bits/stdc++.h>
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
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==1)
	        v.push_back(i);
	    }
	    int f=0;
	    for(int i=1;i<v.size();i++)
	    {
	        if(v[i]-v[i-1]<6)
	        {
	            cout<<"NO"<<"\n";f=1;break;
	        }
	    }
	    if(f==0)
	    cout<<"YES"<<"\n";
	}
	return 0;
}
