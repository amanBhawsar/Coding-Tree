#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    int b[n];
	    int ans[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        ans[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        cin >> b[i];
	    }
	    int left,right;
	    for(int i=0;i<n;i++){
	        left=i+1-a[i];
	        right=i+1+a[i];
	        if(left-1<0){
    	        left=0;
    	        ans[0]++;
    	    }else{
    	        ans[left-1]++;
    	    }
    	    if(right>=n){
    	        right=n;
    	    }else{
    	        ans[right]--;
    	    }
    	    
    	   // for(int j=0;j<n;j++){
    	   //     cout << ans[j] << " ";
    	   // }
    	   // cout << i << " " << endl;
	    }
	    
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=ans[i];
	        ans[i]=sum;
	    }
	    sort(b,b+n);
	    sort(ans,ans+n);
	    int flag=1;
	    for(int i=0;i<n;i++){
	        if(ans[i]!=b[i]){
	            flag=0;
	            break;
	        }
	        
	    }
	    
	    
	    if(flag==0){
	        cout << "NO" << endl;
	    }else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
