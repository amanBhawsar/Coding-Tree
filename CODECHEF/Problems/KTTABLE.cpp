#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n],b[n],i,j,count=0;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n;i++)
            cin >> b[i];
        for(i=n-1;i>=1;i--)
            a[i]=a[i]-a[i-1];
        for(i=0;i<n;i++){
            if(b[i]<=a[i])
                count++;
        }
        cout << count << endl;	
	}
	return 0;
}
