#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,s=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    for(i=0;i<n;i++){
        sum-=arr[i];
        if(sum==s){
            printf("Yes\n");
            return 0;
        }
        s+=arr[i];
    }
    printf("No\n");
}
