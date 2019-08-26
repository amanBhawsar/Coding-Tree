#include <stdio.h>
int main(){
    int rd,rm,ry;
    int cd,cm,cy;
    scanf("%d %d %d",&rd,&rm,&ry);
    scanf("%d %d %d",&cd,&cm,&cy);
    if(cy==ry){
        if(cm==rm){
            if(rd>cd){
                printf("%d",15*(rd-cd));
            }
            else{
                printf("0");
            }
        }
        else if(rm>cm){
            printf("%d",500*(rm-cm));
        }
        else{
            printf("0");
        }
    }
    else if(ry>cy){
        printf("10000");
    }
    else{
        printf("0");
    }

}
