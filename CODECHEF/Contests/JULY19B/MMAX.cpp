#include<bits/stdc++.h>
using namespace std;

int mod(string number,int n)
{
    int cnt=0;
    for(int i=0; i<number.length(); i++)
    {
        cnt=(cnt*10+(int)number[i]-'0')%n;
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        string k;
        cin>>k;
        int mx;
        if(mod(k,n)==0) mx=0;
        else if(n%2==0)
        {
            if(mod(k,n)<n/2)
                mx=(mod(k,n))*2;
            else if(mod(k,n)==n/2)
                mx=n-1;
            else
                mx=(n-mod(k,n))*2;
        }
        else
        {
            if(mod(k,n)<=n/2)
                mx=(mod(k,n))*2;
            else
                mx=(n-mod(k,n))*2;
        }
        cout<<mx<<endl;
    }
}
