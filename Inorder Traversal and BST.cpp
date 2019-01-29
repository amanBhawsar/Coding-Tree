#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t,c;
    cin >> t;
    while(t--){
        int n,x,p=0;
        c=0;
    	vector<int> l;
    	cin >> n;
    	for(int i=0;i<n;i++){
    	    cin >> x;
    	    l.push_back(x);
    	}
    	for(int i=1;i<n;i++){
    	    if(l.at(i-1)>=l.at(i)){
    	        p=1;
    	    }
    	}
    	if(p==1){
    	    cout << 0 <<endl;
    	}
    	else{
    	    cout << 1 <<endl;
    	}
    }
	return 0;
}
