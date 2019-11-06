/*
Given a positive integer N and Q queries. For every queries, you will be given start and end point and a positive integer K which is going to be added to the numbers in the range(from 1 to N) as per queries. Once you are done with every query, you need to print the numbers from 1 to N with updated values.

Input:
First line of input contains number of testcases T. For each testcase, first line contains N and Q( number of queries). Q lines after this will contain three integers in each line as start, end and K, where start is the starting index of the range, end is the ending index of the range and K is the value to add with the elements in the range.

Output:
For each testcase, you need to print the elements from 1 to N in a single line with updated values, i.e., after adding the values as per the queries.

Constraints:
1 <= T <= 100
1 <= N, K <= 106
1 <= Q <= 105
1 <= start, end <= N

Example:
Input:
1
5 3
1 2 5
2 5 10
3 4 5

Output:
6 17 18 19 15

Explanation:
Testcase 1: After the queries, we have elements added in the given ranges, so updated numbers from 1 to 5 will be as 6, 17, 18, 19, 15.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		int arr[n+1];
		for(int i=0;i<=n;i++){
			arr[i]=i;
		}
		while(q--){
			int l,r,val;
			cin >> l >> r >> val;
			arr[l]+=val;
			if(r+1<=n){
				arr[r+1]+=-val;
			}
		}
		int sum=0;
		for(int i=1;i<=n;i++){
			sum = sum + arr[i] - (i-1);
			cout << sum << " ";
		}
		cout << endl;
	}
	return 0;
}