#include <stdio.h>
#include <string.h>
int main(){
    int t,i;
    char arr[100];
    scanf("%d",&t);
    while(t--){
        int k=0,f=0;
        fgets(arr, 100, stdin);
        int l = strlen(arr);
        for(i=0;i<l-3;i++){
            if(arr[i]=='n' && arr[i+1]=='o' && arr[i+2]=='t'){
                if(i==0 &&(l==4 || arr[3]==' ' || arr[3]=='"')){
                    printf("Real Fancy\n");
                    continue;
                }
                else if(arr[i-1]==' ' && arr[i+3]==' ' || (i==l-4 && arr[i-1]==' ')){
                    printf("Real Fancy\n");
                    continue;
                }
            }
            else{
                printf("regularly fancy\n");
            }
        }

    }
}
