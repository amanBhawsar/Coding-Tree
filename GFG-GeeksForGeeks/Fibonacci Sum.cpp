#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	long long fib[100001]={0};
	long long sumFib[100001]={0};
	fib[0]=0;sumFib[0]=0;
	fib[1]=1;sumFib[1]=1;
	for(int i=2;i<=100000;i++){
	    fib[i]=(fib[i-1]+fib[i-2])%1000000007;
	    sumFib[i]=(fib[i]+sumFib[i-1])%1000000007;
	}
	while(t--){
	    int n;
	    cin>>n;
	    cout<<sumFib[n]<<endl;
	}
	return 0;
}