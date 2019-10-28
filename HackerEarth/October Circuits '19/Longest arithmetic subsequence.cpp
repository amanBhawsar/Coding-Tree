#include <bits/stdc++.h>
using namespace std;
 
void reverse(int arr[], int n, int k,int z){
    for (int i = z; i < n; i += k){
        int left = i; 
        int right = min(i + k - 1, n - 1); 
        while (left < right) 
            swap(arr[left++], arr[right--]); 
    } 
} 
 
int lengthOfLongestAP(int set[], int n) { 
    if (n <= 2)  return n; 
    int L[n][n]; 
    int llap = 2;
  
    for (int i = 0; i < n; i++) 
        L[i][n-1] = 2; 
  
    for (int j=n-2; j>=1; j--) 
    { 
        int i = j-1, k = j+1; 
        while (i >= 0 && k <= n-1) 
        { 
           if (set[i] + set[k] < 2*set[j]) 
               k++; 
           else if (set[i] + set[k] > 2*set[j]) 
           {   L[i][j] = 2, i--;  
           } 
           else{
               L[i][j] = L[j][k] + 1; 
               llap = max(llap, L[i][j]); 
               i--; k++; 
           } 
        } 
        while (i >= 0) 
        { 
            L[i][j] = 2; 
            i--; 
        } 
    } 
    return llap; 
} 
 
int main() {
	int n,k;
	cin >> n >> k;
	int arr[n];
	if(n>1 && k==1){
	    cout << "No" << endl;
	    return 0;
	}
	for(int i=0;i<n;i++){
	    arr[i]=i+1;
	}
	reverse(arr,n,k,0);
	if(k*k<n)
	    reverse(arr,n,3,k);
	cout << "Yes" << endl;
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
    
}