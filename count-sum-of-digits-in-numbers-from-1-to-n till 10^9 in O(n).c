#include <stdio.h>
#include <string.h>
unsigned long long arr[100000001]={0};
void main(){
    unsigned long long n,sum,i,p,q;
    for(i=0;i<10;i++){
        arr[i]=i;
    }
    for(i=10;i<=100000000;i++){
        p=i%10;
        q=i/10;
        arr[i]=arr[p]+arr[q];
    }
    sum=0;
    scanf("%llu",&n);
    for(i=0;i<=n;i++){
        sum=sum+arr[i];
    }
    printf("%llu\n",sum);
}
