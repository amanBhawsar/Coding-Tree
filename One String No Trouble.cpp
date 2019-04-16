#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char arr[200001];
	int index=0,max=0;
	cin >> arr;
	int len  = strlen(arr);
	if(len==1){
	    cout << "1";
	    return 0;
	}
	for(int i=0;i<len-1;i++){
	    if(arr[i]==arr[i+1]){
	        if(max < i+1-index){
	            max = i+1-index;
	        }
	        index=i+1;
	    }
	    else if(i==len-2){
	        if(max < i+2-index){
	            max = i+2-index;
	        }
	        index=i+1;
	    }
	}
    cout << max;
}
