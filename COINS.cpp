#include <bits/stdc++.h>
using namespace std;

long long int coins(long long int *store,long long int n){
    if(n<12){
        return n;
    }
    if(store[n]==0){
        store[n]=max(n,coins(store,n/2)+coins(store,n/3)+coins(store,n/4));
    }
    return store[n];
}

int main() {
    long long int n;
	while(cin >> n){
	    long long int *store = new long long int[n+1];
	    cout << coins(store,n) << endl;
	}
	return 0;
}
