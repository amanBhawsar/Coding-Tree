#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	    char arr[100000];
	    char arr1[100000];
	    scanf("%s",&arr);
	    int count[26]={0},i=0,f=0;
	    
	    
	    scanf("%s",&arr1);
	    
	    while(arr1[i]!='\0'){
	        count[arr1[i]-'a']++;
	        i++;
	    }
	    i=0;
	    
	    while(arr[i]!='\0'){
	        if(count[arr[i]-'a']>0){
	            printf("%c\n",arr[i]);
	            f=1;
	            break;
	        }
	        i++;
	    }
	    if(f==0){
	        printf("No character present");
	    }
	}
	return 0;
}