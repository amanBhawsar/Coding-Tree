#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    if(n>0){
        cout << n << " ";
        printPattern(n-5);
        cout << n << " ";
    }else{
        cout << n << " ";
    }
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    printPattern(n);
	    cout << endl;
	}
	return 0;
}