#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,temp,sum=0,q,l,r;
	    cin>>n;
	    int arr[1000000];
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        arr[i]=sum+temp;
	        sum+=temp;
	    }
	    cin >> q;
	    while(q--){
	        cin >> l >> r;
	        l--;r--;
	        if(l==0){
	            cout << arr[r] << " ";
	        }else{
	            cout << arr[r] - arr[l-1] << " ";
	        }
	        
	    }
	    cout << endl;
	}
	return 0;
}