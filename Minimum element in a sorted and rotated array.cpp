#include<bits/stdc++.h>
using namespace std;
int arr[10000];

int find(int l,int r){
    if(l<=r){
        if(l==r){
            return arr[l];
        }
        int m = (l+r)/2;
        if(arr[m]>arr[m+1] && m<r){
            return arr[m+1];
        }
        if(arr[m]<arr[m-1] && m>l){
            return arr[m];
        }
        if(arr[r]>arr[m]){
            return find(0,m-1);
        }
        return find(m+1,r);
        
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
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cout << find(0,n-1) << endl;
	    
	}
	return 0;
}