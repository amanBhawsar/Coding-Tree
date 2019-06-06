#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int n,temp,k,count =0;
	    int arr[100000]={0};
	    cin >> n;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        arr[temp]++;
	    }
	    cin >> k;
	    for(int i=0;i<100000;i++){
	        if(arr[i]!=0){
	            count+=arr[i];
	        }
	        if(count>=k){
	            cout << i << endl;
	            break;
	        }
	    }
	}
	return 0;
}
