#include <stdio.h>
void main(){
    int t,k,a,b,c,max,i;
    scanf("%d",&t);
    int arr[8];
    while(t--){
        scanf("%d",&k);
        scanf("%d%d%d",&a,&b,&c);
        max=0;
        arr[0]=a+b+c;
        arr[1]=a+b-c;
        arr[2]=-a+b+c;
        arr[3]=-a+b-c;
        arr[4]=a-b+c;
        arr[5]=a-b-c;
        arr[6]=-a-b+c;
        arr[7]=-a-b-c;
        for(i=0;i<8;i++){
            if(arr[i]==k){
                max=1;
                break;
            }
        }
        if(max==1){
            printf("WIN\n");
        }
        else
        {
            printf("LOSE\n");
        }
    }
}
