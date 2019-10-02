#include <stdio.h>
char arr[1001];
char arr1[1001];
int pts[26]={0};
int main(){
    int i=0,sum=0,f=0;
	scanf("%s", &arr);
	scanf("%s", &arr1);
	while(arr[i]!='\0'){
	    pts[arr[i]-'a']++;
	    i++;
	}
	i=0;
	while(arr1[i]!='\0'){
	    pts[arr1[i]-'a']++;
	    i++;
	}
	for(i=0;i<26;i++){
	    sum+=pts[i];
	    if(pts[i]%2==1){
	        f=1;
	        sum-=1;
	    }
	}
	if(f==1){
	    sum++;
	}
	printf("%d",sum);
}
