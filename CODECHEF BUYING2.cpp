#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k,min=200,sum=0;
	    cin >> n >> k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sum+=arr[i];
	        if(arr[i]<min){
	            min = arr[i];
	        }
	    }
	    int ans=sum/k;
	    int rem=sum%k;
	    if(rem>=min){
	        cout << "-1" << endl;
	    }else{
	        cout << ans << endl;
	    }
	}
	return 0;
}
    