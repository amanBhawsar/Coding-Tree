#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,ans=0;
        cin >>n;
        string s;
        cin >> s;
        if(s=="1"){
            ans=1;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans++;
            }
        }
        cout << ans << endl;
    }
}