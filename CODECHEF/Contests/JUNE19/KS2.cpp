#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long t;
	cin >> t;
	while(t--){
	    unsigned long long n,k,temp;
	    cin >> n;
	    k=n*10;
	    for(unsigned long long i=k;i<=k+10;i++){
	        int digitSum=0;
	        temp=i;
	        while(temp!=0){
	            digitSum+=temp%10;
	            temp=temp/10;
	        }
	        if(digitSum%10==0){
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
