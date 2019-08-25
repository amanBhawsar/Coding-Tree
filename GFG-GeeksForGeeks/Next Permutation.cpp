#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    int arr[200];
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int val = arr[n-1],minVal;
	    int z=0;
	    for(i=n-2;i>=0;i--){
	        if(arr[i]>=val){
	            val = arr[i];
	        }else{
	            z=1;
	            break;
	        }
	    }
	    vector <int>adds;
	    if(z==0){
	        sort(arr,arr+n);
	        for(int j=0;j<n;j++){
	            cout << arr[j] << " ";
	        }
	    }else{
	        val=arr[i];
	        minVal=200;
	        for(int j=i;j<n;j++){
	            if(arr[j]>val && arr[j]<minVal){
	                minVal = arr[j];
	            }
	        }
	        int f=0;
	        for(int j=i;j<n;j++){
	           if(f==0 && minVal==arr[j]){
	               f=1;
	               continue;
	           }
	           adds.push_back(arr[j]);
	        }
	       // cout << minVal <<"   "<< i <<endl;
	        sort(adds.begin(),adds.end());
	        for(int j=0;j<i;j++){
	            cout << arr[j] << " ";
	        }
	        cout << minVal << " ";
	        for(int j=0;j<adds.size();j++){
	            cout << adds[j] << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}