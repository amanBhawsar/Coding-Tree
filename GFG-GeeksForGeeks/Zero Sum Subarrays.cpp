#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long n,sum=0,count=0;
	    cin>>n;
	    long arr[n];
	    unordered_map<long,int> ump;
	    ump[0]++;
	    for(long i=0;i<n;i++){
	        cin >> arr[i];
	    }
	   
	    for(long i=0;i<n;i++){
	        sum+=arr[i];
	        if(ump.find(sum)!=ump.end()){
	            count+=ump[sum];
	        }
	        ump[sum]++;
	    }
	    cout << count << endl;
	}
	return 0;
}