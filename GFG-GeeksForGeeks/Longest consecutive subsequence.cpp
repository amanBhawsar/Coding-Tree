#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0,start=-1,max=-1;
	    int arr[100000];
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]==start){
	            count++;
	            start++;
	        }else{
	            if(max<count){
	                max=count;
	            }
	            count=0;
	            start=arr[i];
	            count++;
	            start++;
	        }
	    }
	    if(max<count){  //If only one number is present
	        max=count;
	    }
	    cout<<max<<endl;
	    
	}
	return 0;
}