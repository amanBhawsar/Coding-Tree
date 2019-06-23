#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int arr[1000][1000]={0};
	    int row[1000]={0},col[1000]={0};
	    int r,c;
	    cin>>r>>c;
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin >> arr[i][j];
	            if(arr[i][j]==1){
	                row[i]=1;
	                col[j]=1;
	            }
	        }
	    }
	    
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(row[i]==1 || col[j]==1){
	                arr[i][j]=1;
	            }
	            cout << arr[i][j] << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}