#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b,a%b);
}
int main(){
    int i,t,n,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&a,&b);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int f=0;
        int ca=0,cb=0;
        if(a==1){
            printf("ALICE\n");
        }
        else if(b==1){
            printf("BOB\n");
        }
        else if(a==b || b%a==0){
            for(i=0;i<n;i++){
                if(arr[i]%a==0){
                    f=1;
                    break;
                }
            }
            if(f==1){
                printf("BOB\n");
            }
            else{
                printf("ALICE\n");
            }
        }
        else if(a%b==0){
            for(i=0;i<n;i++){
                if(arr[i]%b==0){
                    f=1;
                    break;
                }
            }
            if(f==1){
                printf("ALICE\n");
            }
            else{
                printf("BOB\n");
            }
        }
        else{
            c=gcd(a,b);
            for(i=0;i<n;i++){
                arr[i]=arr[i]/c;
            }
            a=a/c;
            b=b/c;
            for(i=0;i<n;i++){
                if(arr[i]%a==0){
                    ca++;
                }else if(arr[i]%b==0){
                    cb++;
                }
            }
            if(ca>cb){
                printf("BOB\n");
            }else{
                printf("ALICE\n");
            }
        }
    }
}
