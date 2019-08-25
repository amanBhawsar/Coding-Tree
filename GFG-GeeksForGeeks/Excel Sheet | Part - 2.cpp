#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long int t;
	cin >> t; 
	while(t--){
	    string arr;
	    cin >> arr;
	    long long ans=0;
	    int k=1;
	    for(int i=0;i<arr.length();i++){
	       // cout<<arr[i]<<'+';
	       ans*=26;
	       ans+=arr[i]-'A'+1;
	    }
	    cout << ans << endl;
	}
	return 0;
}
