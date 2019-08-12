#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin >> a[i]; 
        }
        for(int i=0;i<n;i++){
            cin >> b[i]; 
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int k = 20*a[i]-10*b[i];
            if(k<0){
                k=0;
            }
            if(k>maxi){
                maxi=k;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}