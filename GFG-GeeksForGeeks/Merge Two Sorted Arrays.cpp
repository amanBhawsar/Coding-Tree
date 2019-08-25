#include<bits/stdc++.h>
using namespace std;

long long nextGap(long long gap){
    if(gap<=1){
        return 0;
    }
    return (gap/2)+(gap%2);
}

int main()
 {
	long long t;
	cin>>t;
	while(t--){
	    long long m,n,i,j;
	    cin>>m>>n;
	    long *arr = (long*)malloc(m*sizeof(long));
	    long *arr1 = (long*)malloc(n*sizeof(long));
	    for(i=0;i<m;i++){
	        cin >> arr[i];
	    }
	    for(i=0;i<n;i++){
	        cin >> arr1[i];
	    }
	    long long gap = m+n;
	    for(gap=nextGap(gap);gap>0;gap=nextGap(gap)){
	        for(i=0;i+gap<m;i++){
	            if(arr[i]>arr[i+gap]){
	                swap(arr[i],arr[i+gap]);
	            }
	        }
	        for(j=gap>m ? gap-m:0;i<m && i<n;i++,j++){
	            if(arr[i]>arr1[j]){
	                swap(arr[i],arr1[j]);
	            }
	        }
	        if(j<n){
	            for(j=0;j+gap<n;j++){
    	            if(arr1[j]>arr1[j+gap]){
    	                swap(arr1[j],arr1[j+gap]);
    	            }
	             }
	        }
	    }
	    for(i=0;i<m;i++){
	        cout << arr[i] <<" ";
	    }
	    for(i=0;i<n;i++){
	        cout << arr1[i] <<" ";
	    }
	    cout << endl;
	}
	return 0;
}