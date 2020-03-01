#include <bits/stdc++.h>
using namespace std;

int main() {
	double b,balance;
	int a;
	cin>>a>>b;
	if(a<b){
    	if(a%5==0)
    	    balance=(double)(b-a-0.50);
	    else{
	        balance=b;
	    }
	}else{
    	balance=b;
	}
	cout<<fixed<<setprecision(2)<<balance<<endl;
	return 0;
}
