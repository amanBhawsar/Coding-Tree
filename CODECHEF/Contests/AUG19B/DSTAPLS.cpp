#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long int n,k;
        cin >> n >> k;
        n=n/k;
        if(n%k==0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        
    }
    return 0;
}