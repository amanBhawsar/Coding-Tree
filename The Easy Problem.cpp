#include <iostream>
#include <string.h>
using namespace std;
char arr[100005];
int main() {
	int t;
	cin >> t;
    while(t--){
        int i=0,max=0,f=0;
        cin >> arr;
        int cala[26]={0};
        int calA[26]={0};
        while(arr[i]!='\0'){
            if(isupper(arr[i])){
                calA[arr[i]-'A']++;
            }
            else{
                cala[arr[i]-'a']++;
            }
            i++;
        }
        for(i=0;i<26;i++){
            if(cala[i]>max){
                max=cala[i];
            }
        }
        for(i=0;i<26;i++){
            if(calA[i]>max){
                max=calA[i];
            }
        }
        for(i=0;i<26;i++){
            if(calA[i]==max){
                char a = 'A'+i;
                cout << a << endl;
                f=1;
                break;
            }
        }
        if(f==1){
            continue;
        }
        for(i=0;i<26;i++){
            if(cala[i]==max){
                char a = 'a'+i;
                cout << a << endl;
                break;
            }
        }
    }
}
