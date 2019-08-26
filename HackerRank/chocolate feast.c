#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c,m,ans,waffer;
        scanf("%d %d %d",&n,&c,&m);
        ans = n/c;
        waffer=ans;
        while(waffer>=m){
            waffer=waffer-m+1;
            ans++;
        }
        printf("%d\n",ans);
    }
}
