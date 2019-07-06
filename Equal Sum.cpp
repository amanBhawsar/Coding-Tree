#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    for(int i=0;i<n;i++){
	        cin >>arr[i];
	    }
	    long int l=0,r=0,i=0,j=n-1;
	    while(i<j){
	        if(l>r){
	            r=r+arr[j];
	            j--;
	        }else{
	            l=l+arr[i];
	            i++;
	        }
	    }
	    if(l==r){
	        cout <<"YES" << endl;
	    }else{
	        cout <<"NO" << endl;
	    }
	    
	    
	    
	}
	return 0;
}