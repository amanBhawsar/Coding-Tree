#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,k,key,j;
	    cin>>n>>k;
	    int arr[101];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=1;i<n;i++){
	        key = arr[i];
	        j=i-1;
	        while(j>=0 && arr[j]>key){
	            arr[j+1]=arr[j];
	            j--;
	        }
	        arr[j+1]=key;
	    }
	    for(int i=0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}