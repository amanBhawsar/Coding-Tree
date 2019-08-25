#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 
using namespace std;
cpp_int cat[101]={0};
cpp_int catalan(int n){
    if(n<=1){
        return 1;
    }
    cpp_int ans=0;
    for(int i=0;i<n;i++){
        if(cat[i]==0){
            cat[i]=catalan(i);
        }
        if(cat[n-i-1]==0){
            cat[n-i-1]=catalan(n-i-1);
        }
        ans+=cat[i]*cat[n-i-1];
    }
    return ans;
}
int main()
 {
	int t;
	cin>>t;
	cat[0]=1;
	cat[1]=1;
	while(t--){
	    int n;
	    cin>>n;
	    cout << catalan(n) << endl;
	}
	return 0;
}