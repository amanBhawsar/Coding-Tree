#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int add=0,mul=1,c=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            add=0,mul=1;
	            for(int k=i;k<=j;k++){
	                add+=arr[k];
	                mul*=arr[k];
	            }
	            if(add==mul){
	                c++;
	            }
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
