#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    int maxC=0,maxV=0;
	    int currC=1,val=a[n-1];
	    for(int i=n-2;i>=0;i--){
	        if(a[i]==val){
	            currC++;
	        }else{
	            if(currC>=maxC){
	                maxC = currC;
	                maxV = val;
	            }
	            val = a[i];
	            currC = 1;
	        }
	    }
	    if(currC>=maxC){
	       maxC = currC;
	       maxV = val;
	    }
	    cout << maxV << " " << maxC << endl;
	}
	return 0;
}
