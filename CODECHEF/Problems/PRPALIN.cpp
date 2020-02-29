#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n <= 1) 
        return false; 
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false;
    return true; 
} 

bool isPalindrome(int n){
    int divisor = 1; 
    while (n / divisor >= 10) 
        divisor *= 10; 
    while (n != 0){
        int leading = n / divisor;  
        int trailing = n % 10; 
        if (leading != trailing)   
            return false; 
        n = (n % divisor) / 10; 
        divisor = divisor / 100; 
    } 
    return true; 
} 

int main() {
	int n;
	cin >>n;
	if(n<=2){
	    cout << 2 << endl;
	    return 0;
	}
	if(n%2==0){
	    n++;
	}
	while(1){
	    if(isPrime(n) && isPalindrome(n)){
	        cout << n << endl;
	        break;
	    }
	    n+=2;
	}
	return 0;
}
