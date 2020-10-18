#include <iostream>
#include<math.h>
using namespace std;
/*void subArray(long long arr[],long long n) 
{ 
    long long sum=1,c=0;
    for (int i=0; i <n; i++) 
    { sum*=arr[i];
           if(sum%4!=2)
             { c++;}
             sum=1;
    }
    int p=2,f=1;
    int r=(n-p);
    sum=1;
    while(1)
    { r=(n-p);
    for(int i=0;i<n-f;i++,r--)
    { sum=1;
        for(int j=i;j<n-r;j++)
        {
            sum*=arr[j];
        }
     if(sum%4!=2)
     c++;
    }
    p++;
    f++;
    if(p>(n-1))
    break;
    }
    sum=1;
        for(int j=0;j<n;j++)
        {
            sum*=arr[j];
        }
        if(sum%4!=2)
         { c++;}
    cout<<c<<"\n";
}*/
int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],b[n],z[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=(a[i])%4;
        }
        int two=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==2)
            {
                b[i]=two;
                two=i;
            }
            else
                b[i]=two;
        }
        if(two==-1)
        {
            long long x=(n)*(n+1)/2;
            cout<<x<<"\n";
        }
        else
        {
            int zero=-1;
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]==0)
                {
                    z[i]=zero;
                    zero=i;
                }
                else
                    z[i]=zero;
            }
            long long c=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==0)
                    c+=(n-i);
                else if(a[i]==2)
                {
                    long long x,y;
                    if(b[i]==-1)
                        x=0;
                    else
                        x=(n-b[i]);
                    if(z[i]==-1)
                        y=0;
                    else
                        y=(n-z[i]);
                    if(x>y)
                    c+=x;
                    else
                    c+=y;
                }
                else
                {
                    long long x,y;
                    if(b[i]==-1)
                        x=(n-i);
                    else
                    {
                        x=b[i]-i;
                        int temp=b[b[i]];
                        if(temp!=-1)
                            x+=(n-temp);
                    }
                    if(z[i]==-1)
                        y=1;
                    else
                    {
                        if(b[i]<z[i])
                            y=b[i]-i;
                        else
                            y=z[i]-i;
                        y+=(n-z[i]);
                    }
                    if(x>y)
                    c+=x;
                    else
                    c+=y;
                }
            }
            cout<<c<<"\n";
        }
    }
    return 0;
}
