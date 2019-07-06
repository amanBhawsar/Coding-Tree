#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	unsigned long str[1000000]={0};
	str[1]=1;
	for(long i=2;i<=100001;i++){
        str[i] = (str[i-1]%1000000007 + str[i-2]%1000000007)%1000000007;
    }
	while(t--){
	    long n;
	    cin>>n;
	    cout<<str[n+1]<<endl;
	}
	return 0;
}