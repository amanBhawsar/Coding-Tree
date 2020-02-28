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

long long maxPrimeFactors(long long n){
    long long maxPrime = -1; 
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1;
    } 
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
} 

int mostFrequent(vector<int> arr, int n){ 
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count >= max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
    if (curr_count >= max_count){
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  
    return res; 
} 

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k;
	    cin >> n;
	    vector<int> vec;
	    while(n--){
	        cin >> k;
	        vec.push_back(maxPrimeFactors(k));
	    }
	    sort(vec.begin(),vec.end());
	    cout << mostFrequent(vec,vec.size()) << endl;
	}
	return 0;
}
