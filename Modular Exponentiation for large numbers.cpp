#include<bits/stdc++.h>
using namespace std;

int pow(int a,int b,int c){
    if(b==0 || a==1){
        return 1;
    }
    long int temp =  pow(a,b/2,c)%c;
    if(b%2==1){
        return (a*(temp*temp)%c)%c;
    }
    return (temp*temp)%c;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout << pow(a,b,c) << endl;
	}
	return 0;
}