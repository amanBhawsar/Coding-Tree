#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,temp;
	    cin>>n;
	    vector <int>vec;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        vec.push_back(temp);
	    }
	    for(int i=1;i<n;i+=2){
	        swap(vec[i],vec[i-1]);
	    }
	    for(int i=0;i<n;i++){
	        cout << vec[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}