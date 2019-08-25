#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n,temp,flag=0;
	    cin>>m>>n;
	    int arr[100000]={0};
	    for(int i=0;i<m;i++){
	        cin >> temp;
	        arr[temp]++;
	    }
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        if(arr[temp]==0){
	            flag=1;
	        }
	    }
	    if(flag==0){
	        cout << "Yes"<<endl;
	    }else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}