#include <stdio.h>
int main(){
    int n,i,xor;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    xor=arr[0];
    for(i=1;i<n;i++){
        xor=xor^arr[i];
    }
    printf("%d",xor);
}
