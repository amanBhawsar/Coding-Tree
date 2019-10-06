/*
Vaish is very fond of series and patterns. She is creative to the core and loves to solve the series. She always brings new series for her friends to solve. Last week she was working on something where she thought of an interesting series and now wants you to see if you can guess the series correctly or not. She is very excited about it and has decided that she will give you the first 7 terms of the series for help and the rest will have to be figured out by you. 
First 7 terms of the series are given below:-
1 1 2 2 4 2 6

Vaish will further provide you with an integer N and expects you to print all the N terms of the series space separately. Guess the series and print accordingly.
Input Format
The first line of input consists of the number of test cases, T
Next T lines consist of the value of N.
Constraints
1<= T <=100
1<= N <=250

Output Format
For each test case, print the space-separated N terms of the series in a separate line.

Sample TestCase 1
Input
1
7
Output
1 1 2 2 4 2 6

*/

#include <bits/stdc++.h>
using namespace std;

int phi(int n) {
    int result = 1; 
    for (int i = 2; i < n; i++){
        int z=__gcd(i,n);
        if (z==1) 
            result++; 
    }
    return result; 
} 

int dp[251]={0};  
int main() {
	int t;
	cin >>t;
	for(int i=1;i<=250;i++){
		dp[i]=phi(i);
	}
	while(t--){
		int n;
		cin >> n;
		for (int i=1;i<=n;i++){ 
        	cout <<dp[i]<< " "; 
		}
		cout << endl;
	}
    return 0; 
}