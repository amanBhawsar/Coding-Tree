#include <stdio.h>
int main(){
    int n,i,j,d1=0,d2=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++){
        d1+=arr[i][i];
        d2+=arr[n-1-i][i];
    }
    d1=d1-d2;
    if(d1>0){
        printf("%d",d1);
    }
    else{
        printf("%d",-1*d1);
    }
}
