#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,temp,diff,maxi=INT_MIN;
	    cin>>n;
	    vector<int> vec;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        vec.push_back(temp);
	    }
	    sort(vec.begin(),vec.end());
	    for(int i=1;i<n;i++){
	        diff=vec[i]-vec[i-1];
	        if(maxi<diff){
	            maxi=diff;
	        }
	    }
	    if(maxi==INT_MIN){
	        maxi=0;
	    }
	    cout << maxi << endl;
	}
	return 0;
}s