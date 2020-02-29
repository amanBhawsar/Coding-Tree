#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int start[n];
	    int end[n];
	    for(int i=0;i<n;i++){
	        cin >> start[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> end[i];
	    }
	    sort(start,start+n);
	    sort(end,end+n);
	    int i=0,j=0;
	    int maxi=0,curr=0;
	    while(i<n && j<n){
	        if(start[i]<end[j]){
	            curr++;
	            i++;
	        }else if(start[i]==end[j]){
	            i++;j++;
	        }else{
	            j++;
	            curr--;
	        }
	        maxi=max(maxi,curr);
	    }
	    cout << maxi << endl;
	}
	return 0;
}
