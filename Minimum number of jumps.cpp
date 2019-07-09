#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[],int n){
    if(n<=1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }
    int maxReach=arr[0];
    int stepsLeft=arr[0],jump=1;
    for(int i=1;i<n;i++){
        if(i==n-1){
            return jump;
        }
        
        maxReach =  max(maxReach,i+arr[i]);
        stepsLeft--;
        if(stepsLeft==0){
            jump++;
            if(i>=maxReach){
                return -1;
            }
            stepsLeft=maxReach-i;
        }
    }
    return -1;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cout << minJumps(arr,n) << endl;
	}
	return 0;
}