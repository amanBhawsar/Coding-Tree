#include <iostream>
using namespace std;
long int arr[1001][801]={0};
long int nCr(int n,int r){
    if(n==r || r==0){
        return 1;
    }
    if(r==1){
        return n;
    }
    if(arr[n][r]!=0){
        return arr[n][r];
    }
    long int ans;
    ans = (nCr(n-1, r-1)%1000000007 + nCr(n-1, r)%1000000007)%1000000007;
    arr[n][r] = ans;
    return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,r;
	    cin >> n >> r;
	    if(n>=r){
	        cout << nCr(n,r)<<endl;
	    }
	    else{
	        cout << "0" << endl;
	    }
	    
	}
	return 0;
}