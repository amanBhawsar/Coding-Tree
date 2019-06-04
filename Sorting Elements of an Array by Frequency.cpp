#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n;
	    int arr[1001]={0};
	    int arrClone[1001]={0};
	    for(int i=0;i<n;i++){
	        cin >> k;
	        arr[k]++;
	        arrClone[k]++;
	    }
	    sort(arr,arr+1000);
	   // for(int i=999;i>=0;i--){
	   //     if(arr[i]==0){
	   //         break;
	   //     }
	   //     cout << arr[i] << endl;
	   // }
	    
	    
	    for(int i=999;i>=0;i--){
	       // cout<<arr[i]<<" ";
	        if(arr[i]==0){
	            break;
	        }
	        for(int j=0;j<=999;j++){
	            if(arr[i]==arrClone[j]){
	                int freq = arr[i];
	                arrClone[j]=0;
	                //cout<<freq<<" ";
	                while(freq--){
	                    cout << j << " ";
	                }
	                break;
	            }
	        }
	    }
	    cout << endl;
	}
	return 0;
}