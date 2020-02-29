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
	    sort(arr,arr+n);
	    for(int i=1;i+1<n;i+=2){
	        swap(arr[i],arr[i+1]);
	    }
	    for(int i=0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
