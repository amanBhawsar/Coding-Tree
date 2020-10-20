#include<stdio.h>
int main()
{
    int a[1000],sum=0,q=0,k,n,i,j,max=0,digit=0,m=0;
    scanf("%d",&q);
    for(k=1;k<=q;k++)
    { sum=0;max=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {  
            for(j=i+1;j<n;j++)
            {  m=0;sum=0;
                m=a[i]*a[j];
            while(m!=0)
            { 
                digit=m%10;
                sum+=digit;
                m/=10;
            }
            if(sum>max)
            max=sum;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

