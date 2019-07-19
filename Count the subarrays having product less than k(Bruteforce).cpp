#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<m){
	            c++;
	        }
	        int temp=arr[i];
	        
	        for(int j=i+1;j<n;j++){
	            temp*=arr[j];
	            if(temp<m){
	                c++;
	            }else{
	                break;
	            }
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}