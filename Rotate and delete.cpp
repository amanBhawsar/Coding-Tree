#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,temp;
	    cin>>n;
	    vector<int> vec;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        vec.push_back(temp);
	    }
	    if(n==1){
	        cout << vec[0] << endl;
	        continue;
	    }
	    if(n%2==1){
	        temp = ((n-3)/4)+2;
	    }else{
	        temp = ((n-2)/4)+1;
	    }
	    cout << vec[temp] << endl;
	}
	return 0;
}