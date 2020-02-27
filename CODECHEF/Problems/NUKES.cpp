#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,n,k;
	cin >>a >>n >>k;
	int arr[k]={0};
	while(a--){
	    int i=0;
	    if(arr[i]<n){
	        arr[i]++;
	    }else{
	        int f=0;
	        arr[i]=0;
	        int j=i+1;
	        while(arr[j]>=n){
	            arr[j]=0;
	            j++;
	            if(j==k){
	                f=1;
	                break;
	            }
	        }
	        if(f!=1){
	            arr[j]++;
	        }
	    }
	}
	for(int i=0;i<k;i++){
	    cout << arr[i] << " ";
	}
	return 0;
}
