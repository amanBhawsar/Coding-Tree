#include<string.h>
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
    while(t--){
        long int n,len,ans,k,f=0;
        char c;
        cin >> n;
        char arr[n];
        cin >> arr;
        cin >> c;
        len = strlen(arr);
        k=len;
        ans = (k*(k+1))/2;
        k=0;
        for(int i=0;i<len;i++){
            if(arr[i]==c){
                ans-=(k*(k+1))/2;
                k=0;
                f=1;
            }
            else{
                k++;
            }
        }
        ans-=(k*(k+1))/2;
        if(f==0){
            ans=0;
        }
        cout << ans << endl;
    }
	return 0;
}
