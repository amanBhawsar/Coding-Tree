#include<bits/stdc++.h>
using namespace std;

int countPaths(int arr[101][101],int m,int n){
    if(m==0 && n==0){
        return 1;
    }
    if( m<0 || n<0){
        return 0;
    }
    if(arr[m][n]==0)
        arr[m][n]=((countPaths(arr,m,n-1))%1000000007+(countPaths(arr,m-1,n))%1000000007)%1000000007;
    return arr[m][n];
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin >> m >> n;
	    int arr[101][101]={0};
	    cout << countPaths(arr,m-1,n-1) << endl;
	}
	return 0;
}