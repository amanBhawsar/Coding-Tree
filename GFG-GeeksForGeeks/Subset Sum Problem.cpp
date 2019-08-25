#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int sCon,int sum,int n){
    if(2*sum==sCon){
        return true;
    }
    if(n<0 || 2*sum>sCon){
        return false;
    }
    return (subsetSum(arr,sCon,sum+arr[n],n-1) || subsetSum(arr,sCon,sum,n-1));
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],sumConst=0,sum=0;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sumConst+=arr[i];
	    }
	    if(sumConst%2==1){
	        cout << "NO" << endl;
	        continue;
	    }
	    if(subsetSum(arr,sumConst,sum,n-1)){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}