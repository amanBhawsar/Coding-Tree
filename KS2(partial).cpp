#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <long int>vec;
    vector <long int>ans;
	long int t,p,q,i,z;
	cin >> t;
    for(i=0;i<10;i++){
        vec.push_back(i);
    }
    for(i=10;i<100000000;i++){
        p=i%10;
        q=i/10;
        z=vec[p]+vec[q];
        vec.push_back(z);
        if(z%10==0){
            ans.push_back(i);
        }
    }
	while(t--){
	    long int n;
	    cin >> n;
	    cout << ans[n-1]<<endl;
	}
	return 0;
}