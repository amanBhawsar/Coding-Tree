#include <stdio.h>
#define MOD 1000000007
unsigned long long int apow(unsigned long long int,unsigned long long int);
int main(){
	unsigned long long int t,n,ans,q,p;
    scanf("%llu",&t);
    while(t--){
        scanf("%llu",&n);
        ans = ((n%MOD)*apow(2,(n-1)))%MOD;
        printf("%llu\n",ans);
    }
}
unsigned long long int apow(unsigned long long int b, unsigned long long int e){
    unsigned long long int res=1;
    for (;;){
        if (e&1){
            res=((res%MOD)*(b%MOD))%MOD;
        }
        e >>= 1;
        if (!e)
            break;
        b=((b%MOD)*(b%MOD))%MOD;
    }
    return res;
}
