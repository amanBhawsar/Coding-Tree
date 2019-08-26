#include <stdio.h>
int main(){
    int ans;
    int t,i;
    scanf("%d",&t);
    while(t--){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        int arr[n];
        for(i=0;i<=n-1;i++){
            arr[i]=a*i + b*(n-1-i);
        }
        if(a==b){
            printf("%d ",(n-1)*a);
        }
        else if(a<b){
            for(i=n-1;i>=0;i--){
                printf("%d ",arr[i]);
            }
        }
        else{
            for(i=0;i<=n-1;i++){
                printf("%d ",arr[i]);
            }
        }
    }
}
