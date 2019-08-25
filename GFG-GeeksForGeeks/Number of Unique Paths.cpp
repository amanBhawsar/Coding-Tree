#include<bits/stdc++.h>
using namespace std;
int m,n;
int check(int i,int j){
    if(i==m-1 || j==n-1){
        return 1;
    }
    return check(i,j+1)+check(i+1,j);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    cout << check(0,0) << endl;
	}
	return 0;
}