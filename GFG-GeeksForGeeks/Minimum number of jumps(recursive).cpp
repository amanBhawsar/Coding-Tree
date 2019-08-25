#include<bits/stdc++.h>
using namespace std;

int jumps(int arr[],int s,int d){
    if(s==d){
        return 0;
    }
    if(arr[s]==0){
        return -1;
    }
    int min=INT_MAX;
    for(int i=s+1;i<=d && i<=s+arr[s];i++){
        int j = jumps(arr,i,d);
        if(j!=-1 && j+1<min){
            min=j+1;
        }
    }
    return min;
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
	    cout << jumps(arr,0,n-1);
	}
	return 0;
}