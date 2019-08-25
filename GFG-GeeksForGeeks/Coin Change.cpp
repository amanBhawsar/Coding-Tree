#include<bits/stdc++.h>
using namespace std;

int count(int s[],int m,int n){
    int table[n+1];
    memset(table,0,sizeof(table));
    table[0]=1;
    for(int i=0;i<m;i++){
        for(int j=s[i];j<=n;j++){
            table[j]+=table[j-s[i]];
        }
    }
    return table[n];
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin >> n;
	    int arr[400];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cin >> m;
        cout << count(arr,n,m) << endl;  
	}
	return 0;
}