#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	int t;
	cin >> t;
	for(int z=0;z<t;z++){
	    int n,trace=0,r=0,c=0;
	    cin >> n;
	    vector<vector<int>> arr(n,vector<int> (n,0));
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            cin>>arr[i][j];
	    set<int> k;
	    for(int i=0;i<n;i++){
	        trace+=arr[i][i];
	    }
	    for(int i=0;i<n;i++){
	        k.clear();
	        for(int j=0;j<n;j++){
	            k.insert(arr[i][j]);
	        }
	        if(k.size()<n)
	            r++;
	    }
	   for(int j=0;j<n;j++){
	        k.clear();
	        for(int i=0;i<n;i++){
	            k.insert(arr[i][j]);
	        }
	        if(k.size()<n)
	            c++;
	    }
	    
	        cout << "Case #" << z+1 << ": " <<trace << " "<< r<< " " << c << "\n";
	}
	return 0;
}