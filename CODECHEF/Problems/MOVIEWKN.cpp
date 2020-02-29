#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    int n, mov, val=0;
	    cin>>n;
	    int len[n];
	    int rating[n];
	    for (int i = 0; i < n; i++) {
	        cin>>len[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin>>rating[i];
	    }
	    for (int i = 0; i < n; i++) {
	        if(val < len[i] * rating[i]){
	        val = len[i] * rating[i];
	        mov = i+1;
	        }else if(val == len[i] * rating[i]){
	            if(rating[i] > rating[mov-1])
	            mov = i+1;
	        }
	    }
	    cout<<mov<<endl;
	}
	return 0;
}
