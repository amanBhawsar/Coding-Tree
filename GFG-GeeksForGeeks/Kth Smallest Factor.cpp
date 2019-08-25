#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    vector<long> vec;
	    long n,i=1,k;
	    cin>>n>>k;
	    
	    for(i=1;i*i<=n;i++){
	        if(n%i==0){
	            if(i==n/i){
	                vec.push_back(i);
	            }else{
	                vec.push_back(i);
	                vec.push_back(n/i);
	            }
	        }
	    }
	    sort(vec.begin(),vec.end());
	    
	    if(vec.size()>k-1){
	        cout << vec[k-1] << endl;
	    }else{
	        cout << "-1" << endl;
	    }
	}
	return 0;
}