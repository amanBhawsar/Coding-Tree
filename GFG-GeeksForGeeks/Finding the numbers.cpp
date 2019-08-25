#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    long int n,temp,max=-1;
	    cin >> n;
	    n=2*n+2;
	    long int arr[100000]={0};
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        arr[temp]++;
	        if(max<temp){
	            max=temp;
	        }
	    }
	    int out=0;
	    for(int i=1;i<=max;i++){
	        if(arr[i]%2==1){
	            cout << i << " ";
	            out++;
	            if(out==2){
	                break;
	            }
	        }
	    }
	    cout << endl;
	}
	return 0;
}