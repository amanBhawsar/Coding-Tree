#include<bits/stdc++.h>
using namespace std;
int arr[55]={0};
int count(int n){
    if(n<=3){
        return arr[n];
    }
    if(arr[n]==0){
        arr[n]=count(n-1)+count(n-2)+count(n-3);
    }
    return arr[n];
    
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    arr[0]=0;
	    arr[1]=1;
	    arr[2]=2;
	    arr[3]=4;
	    cout << count(n) << endl;
	}
	return 0;
}