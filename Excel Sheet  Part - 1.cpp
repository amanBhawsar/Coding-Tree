#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char str[100];
	    int i=0;
	    while(n>0){
	        int rem = n%26;
	        if(rem==0){
	            str[i++]='Z';
	            n=(n/26)-1;
	        }else{
	            str[i++]=rem-1+'A';
	            n=n/26;
	        }
	    }
        while(i--){
            cout<<str[i];
        }
        cout<<endl;
	}
	return 0;
}