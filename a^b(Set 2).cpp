#include<bits/stdc++.h>
using namespace std;
long long power(int n,unsigned long long k){
    if(k==0){
        return 1;
    }
    unsigned long long temp=power(n,k/2)%1000000007;
    if(k%2==0){
        return (temp*temp)%1000000007;
    }else{
        return (n*((temp*temp)%1000000007))%1000000007;
    }
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    unsigned long long a,b;
    	cin >> a >> b;									
    	cout << power(a,b)<< endl;
	}
	return 0;
}