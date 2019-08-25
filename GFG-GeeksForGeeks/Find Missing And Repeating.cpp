#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,temp,rep,zero;
	    cin>>n;
	    int arr[1000000]={0};
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        arr[temp-1]++;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]==2){
	            rep=i+1;
	        }
	        if(arr[i]==0){
	            zero=i+1;
	        }
	    }
	    cout << rep << " " << zero << endl;
	}
	return 0;
}