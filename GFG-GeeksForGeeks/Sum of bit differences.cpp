#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    int arr[11]={0};
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(i==j){
	                continue;
	            }
	            int a=arr[i],b=arr[j];
	             
                for (int k = 0; k <= 3; k++){
                    if (((a>>k)&1)!=((b>>k)&1)){ 
                        count++; 
                    }
                }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}