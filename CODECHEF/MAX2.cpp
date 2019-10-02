#include <stdio.h>
int main(){
    int n,c=0,i,flag=0;
    char arr[100000];
    scanf("%d",&n);
    scanf("%s",&arr);
    for(i=n-1;i>=0;i--){
        if(arr[i]-'0'==1){
            flag=1;
            break;
        }
        c++;
    }
    if(flag=0){
        c=0;
    }
    printf("%d",c);
    return 0;
}
