#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,a,b,c=0,ans=0;
	    cin >> n >> a >> b;
	    int arr[n]={0};
	    while(a){
	        c+=a%2;
	        a/=2;
	    }
	    while(b){
	        c+=b%2;
	        b/=2;
	    }
	    if(c!=0){
    	    for(int i=0;i<n;i++){
    	        arr[i]=1;
    	        c--;
    	        if(c==0){
    	            break;
    	        }
    	    }
	    }
	    if(c!=0){
    	    for(int i=n-1;i>=0;i--){
    	        arr[i]=0;
    	        c--;
    	        if(c==0){
    	            break;
    	        }
    	    }
	    }
	    ans=arr[0];
	    for(int i=1;i<n;i++){
	        ans=ans*2+arr[i];
	    }
	    cout << ans << endl;
	}
	return 0;
}
