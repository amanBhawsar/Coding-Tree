#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,f=0;
	    cin>>n;
	    unordered_map <long long, int> um;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        um[arr[i]]++;
	        
	    }
	    for(int i=0;i<n;i++){
	        if(um[arr[i]]==1){
	            f=1;
	            cout << arr[i]<<endl;
	            break;
	        }
	    }
	    if(f==0){
	        cout << "0" << endl;
	    }
	}
	return 0;
}