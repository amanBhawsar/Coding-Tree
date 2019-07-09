#include<bits/stdc++.h>
using namespace std;

int editDist(string a,string b,int m,int n){
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }
    if(a[m-1]==b[n-1]){
        return editDist(a,b,m-1,n-1);
    }
    return 1+min(min(editDist(a,b,m,n-1),editDist(a,b,m-1,n)),editDist(a,b,m-1,n-1));
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    string a,b;
	    cin >> m >> n >> a >> b;
	    cout << editDist(a,b,m,n) << endl;
	}
	return 0;
}