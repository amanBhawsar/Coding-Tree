#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    unsigned long long m;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int c=0,i=0;
	    unsigned long long pdt=1;
	    for(int j=0;j<n;j++){
	        pdt*=arr[j];
	        while(i<j && pdt>m){
	            pdt=pdt/arr[i];
	            i++;
	        }
	        if(pdt<m){
	            c+=j-i+1;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}