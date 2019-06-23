#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,i,j;
	    cin>>n;
	    int arr[500][500]={0};
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
	            cin >> arr[i][j];
	        }
	    }
	    for(int col=0;col<n;col++)
    	    for(i=0,j=col;i<n && j>=0;i++,j--)
    	        cout << arr[i][j] << " ";
	    for(int row=1;row<n;row++)
    	    for(i=row,j=n-1;i<n && j>=0;i++,j--)
    	        cout << arr[i][j] << " ";
    	cout << endl;
	}
	return 0;
}