#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[],int i,int sumCalc,int total){
    if(i==0){
        return abs((total-sumCalc)-sumCalc);
    }
    return min(findMinDiff(arr,i-1,sumCalc+arr[i-1],total),findMinDiff(arr,i-1,sumCalc,total));
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,total=0;
	    cin>>n;
	    int arr[60];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        total+=arr[i];
	    }
	    cout << findMinDiff(arr,n,0,total) << endl;
	    
	}
	return 0;
}