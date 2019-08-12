#include <stdio.h>
#include <string.h>

int main() {
    int t,i,j,len;
    char str[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&str);
        len=strlen(str);
        for(j=0;j<len;j+=2)
            printf("%c",str[j]);
        printf(" ");
        for(j=1;j<len;j+=2)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}
