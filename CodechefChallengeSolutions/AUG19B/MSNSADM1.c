#include<stdio.h>
int main()
{
    
    int k,a[150],b[150],i,max=0,z,n,t;
    scanf("%d",&t);
    for(z=1;z<=t;z++)
    {  max=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        for(i=0;i<n;i++)
        {
            k=20*a[i]-10*b[i];
         if(k>max)
        max=k;
        }
        if(max<=0)
        printf("%d\n",0);
        else
        printf("%d\n",max);
    }
    return 0;
}


