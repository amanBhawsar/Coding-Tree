#include <stdio.h>

int max(int a,int b){
    return (a>b?a:b);
}
int main(){
    int t;
    int n;
    scanf("%d",&n);
    t++;
    while(n!=0){
        int arr[n],sum=0,nMoves=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        sum=sum/n;
        for(int i=0;i<n;i++){
            nMoves+=max(arr[i]-sum,0);
        }
        printf("Set #%d\n",t);
        printf("The minimum number of moves is %d.\n\n",nMoves);
        scanf("%d",&n);
        t++;
    }
    return 0;
}
