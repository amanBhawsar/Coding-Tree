#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int arr[1001]={0};
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int sum=0,count;
	    for(int i=1;i<=n;i++){
	        if(arr[i]!=0){
	            sum+=arr[i];
	           // cout<<arr[i]<<" ";
	        }else{
	            count=0;
	            int j=i;
	            while(j){
	                j&=(j-1);
	                count++;
	            }
	            arr[i]=count;
	            sum+=arr[i];
	           // cout<<arr[i]<<" ";
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}