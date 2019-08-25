#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    long int arr[1000000];
    while(t--){
    	int n,c=0;
    	cin >> n;
    	for(int i=0;i<n;i++)
    	   cin>>arr[i];
    	sort(arr,arr+n);
    	for(int i=0;i<n;i++){
    	    if(arr[i]<=0){
    	        c++;
    	    }
            else{
                break;
            }
    	}
    	if(c==0){
    	    cout<<n<<" "<<n<<"\n";
    	    continue;
    	}
        if(n-c==0){
            cout<<c<<" "<<c<<"\n";
            continue;
        }
        if(c>n-c)
            cout<<c<<" "<<n-c;
        else
            cout<<n-c<<" "<<c;
        cout<<"\n";
    }
    return 0;
}
