#include <iostream>
using namespace std;

int main() {
	int n,h,t,pos=0,box=0,i,g=-4;
	cin>>n>>h;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>t;
	    a[i]=t;
	}
	while(g!=0)
	{
	    cin>>g;
	    if(g==1)
	    {
	        if(pos==0){}
	        else
	        {pos=pos-1;
	    }
	}
	else if(g==2)
	{
	    if(pos==n-1){}
	    else
	    {
	        pos=pos+1;
	    }
	}
	else if(g==3)
	{
	    if(a[pos]==0||box==1){}
	    else
	    {
	        a[pos]=a[pos]-1;
	        box=1;
	    }
	}
	else if(g==4)
	{
	    if(a[pos]<h&&box==1)
	    {
	        a[pos]=a[pos]+1;
	        box=0;
	    }
	    else{}
	}
	else
	{
	    break;
	}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
