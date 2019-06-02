#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int m,n;
	    cin >> m >> n;
	    string X,Y;
	    cin >> X >> Y;
	    int arr[102][102]={0};
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0){
	                arr[i][j]=0;
	            }
	            else if(X[i-1]==Y[j-1]){
	                arr[i][j]=1+arr[i-1][j-1];
	            }
	            else{
	                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
	            }
	        }
	    }
	    cout << arr[m][n] << endl;
	}
	return 0;
}