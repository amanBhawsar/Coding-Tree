#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,k;
    cin >> t;
	while(t!=0){
	    vector<int> arr;
	    vector<int> v;
	    while(t--){
	        cin >>k;
	        arr.push_back(k);
	        v.push_back(k);
	    }
	    int f=0;
	    for(int i=0;i<arr.size();i++){
    	    v[arr[i]]=i+1;
	    }
	    for(int i=0;i<arr.size();i++){
    	    if(v[i+1]!=arr[i]){
    	        f=1;
    	        break;
    	    }
	    }
	    if(f==0){
	        cout << "ambiguous" << endl;
	    }else{
	        cout << "not ambiguous" << endl;
	        
	    }
	    
	    cin >> t;
	}
	return 0;
}
