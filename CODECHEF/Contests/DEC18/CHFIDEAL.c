#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int t,n;
	n=(rand())%3 + 1;
	printf("%d\n",n);
	fflush(stdout);
	scanf("%d",&t);
	if(((t==2)&&(n==3))||((t==3)&&(n==2))){
		printf("1\n");
		fflush(stdout);
	}
	else if(((t==1)&&(n==3))||((t==3)&&(n==1))){
		printf("2\n");
		fflush(stdout);
	}
	else if(((t==1)&&(n==2))||((t==2)&&(n==1))){
		printf("3\n");
		fflush(stdout);
	}
	else{}
	return 0;
}
