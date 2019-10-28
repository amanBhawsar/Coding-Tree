#include <bits/stdc++.h>
using namespace std;
 
int main() {
    bool prime[100000000+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=100000001; p++){
        if (prime[p] == true){
            for (int i=p*p; i<=100000001; i += p) 
                prime[i] = false; 
        } 
    } 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(prime[arr[i]]){
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}

            
