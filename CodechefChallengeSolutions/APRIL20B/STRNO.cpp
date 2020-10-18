#include <bits/stdc++.h>
using namespace std;
void primeFactors(long long n,long long k)  
{  
    vector<int>v;
    while (n % 2 == 0)  
    {  
        v.push_back(2);
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            v.push_back(i);
            n = n/i;  
        }  
    }  
    if (n > 2)  
        v.push_back(n);
   /* for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1])
           {k=count(v.begin(),v.end(),v[i]);}
           sum*=(k+1);
       }*/
       if(v.size()>=k)
       cout<<"1\n";
       else
        cout<<"0\n";
}
int main(void) {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long x,k;
	    cin>>x>>k;
	   primeFactors(x,k);
	}
}