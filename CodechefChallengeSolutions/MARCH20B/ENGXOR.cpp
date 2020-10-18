#include <bits/stdc++.h>
using namespace std;
bool checkbit(long long n)
{
    int c=0;
    while(n)
    {
        if(n&1)
        c++;
        n>>=1;
    }
    if(c%2==0)
    return 1;
    else
    return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
long long t;
	scanf("%lld",&t);
	while(t--)
	{
	    long long n,p,q;
	   // vector<int>v;
	    scanf("%lld%lld",&n,&q);
	    long long a[n],c=0;
	    for(int i=0;i<n;i++)
	  {  scanf("%lld",&a[i]);
	      {if(checkbit(a[i])==true)
	      c++;}
	  }
	    while(q--)
	    { 
	        scanf("%lld",&p);
	       if(checkbit(p)==true)
	       printf("%lld %lld",c,n-c);
	       else
	       printf("%lld %lld",n-c,c);
	       printf("\n");
         }
}
}
