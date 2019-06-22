#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int arr[1000000]={0};
	    int n,m,temp,count;
	    cin>>n>>m;
	    while(n--){
	        cin >> temp;
	        arr[temp]++;
	    }
	    while(m--){
	        cin >> temp;
	        if(arr[temp]!=0){
	            count=arr[temp];
	            while(count--){
	                cout << temp << " ";
	            }
	            arr[temp]=0;
	        }
	    }
	    
	    for(int i=0;i<1000000;i++){
	        if(arr[i]>0){
	            count=arr[i];
	            while(count--){
	                cout << i << " ";
	            }
	        }
	    }
	    cout << endl;
	    
	    
	}
	return 0;
}