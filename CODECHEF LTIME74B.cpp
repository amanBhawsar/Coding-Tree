#include <iostream>
using namespace std;

int sumOfDig(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n=n/10;
    }
    return s;
}

int main() {
	int t;
	cin >> t;
	while(t--){
        int n,maxi=0;
    	cin >> n;
    	int arr[n];
    	for(int i=0;i<n;i++){
    	    cin >> arr[i];
    	}
    	for(int i=0;i<n;i++){
    	    for(int j=i+1;j<n;j++){
    	        int p = arr[i]*arr[j];
    	        int s=sumOfDig(p);
    	        if(s>maxi){
    	            maxi=s;
    	        }
    	    }
    	}
    	cout << maxi<< endl;
    		    
	}
	return 0;
}
