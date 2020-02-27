#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> vec,int sum,int n){
    if(sum==0){
        return true;
    }
    if(n==0 && sum!=0){
        return false;
    }
    return (subsetSum(vec,sum,n-1) || subsetSum(vec,sum-vec[n-1],n-1));
}

int main() {
	int t;
	cin >>t;
	while(t--){
	    vector<int> vec;
	    int n,k,z,flag=0;
	    cin >> n >> k;
	    for(int i=0;i<n;i++){
	        cin >> z;
	        vec.push_back(z);
	    }
	    sort(vec.begin(),vec.end());
        if(subsetSum(vec,k,n)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
	}
	return 0;
}
