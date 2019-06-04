#include<bits/stdc++.h>
using namespace std;
const int MAX = 10000;
vector<int> arr;
void sieveSundaram() 
{ 
	bool marked[MAX/2 + 100] = {0};
	for (int i=1; i<=(sqrt(MAX)-1)/2; i++) 
		for (int j=(i*(i+1))<<1; j<=MAX/2; j=j+2*i+1) 
			marked[j] = 1; 

	arr.push_back(2); 
	for (int i=1; i<=MAX/2; i++) 
		if (marked[i] == 0) 
			arr.push_back(2*i + 1); 
} 
void findPrime(int n){
    if(n<=2 || n%2!=0){
        cout << "-1" << endl;
    }
    for(int i=0;arr[i]<=n/2;i++){
        int d = n-arr[i];
        //cout << arr[i] << " " << d << endl;
        // cout << binary_search(arr.begin(),arr.end(),d)<<endl;
        if(binary_search(arr.begin(),arr.end(),d)){
            cout << arr[i] << " " << d << endl;
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    sieveSundaram();
    // for(int i=0;i<20;i++){
    //     cout << arr[i]<<" ";
    // }
    while(t--){
        int n;
        cin >> n;
        findPrime(n);
    }

    return 0;
}