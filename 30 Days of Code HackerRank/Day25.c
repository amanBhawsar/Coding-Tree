#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,j,n,count;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        count=0;
        if(n==1){
            printf("Not prime\n");
            continue;
        }
        for(j=2;j*j<=n;j++){
            if(n%j==0){
                count=1;
                break;
            }
        }
        if(count==0)
            printf("Prime\n");
        else
            printf("Not prime\n");
    }
    return 0;
}
