#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char arr[100001];
	int c=0,f=0;
	cin >> arr;
	int len  = strlen(arr);
    for(int i=0;i<len;i++){
        if(f==1){
            if(arr[i]!='6'){
                c++;
                f=0;
            }
        }
        else{
            if(arr[i]=='6'){
                f=1;
            }
            else{
                c++;
            }
        }
    }
    if(f==0){
        cout << c;
    }
    else{
        cout << "-1";
    }

}
