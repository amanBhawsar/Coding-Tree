#include<stdio.h>
void main(){
	int n,r,t;
	scanf("%d %d",&n,&r);
	while(n--){
		scanf("%d",&t);
		if(t>=r){
			printf("Good boi\n");
		}
		else{
			printf("Bad boi\n");
		}
	}
}
