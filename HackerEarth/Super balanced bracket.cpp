#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int countFwd=0,countBwd=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && i<s.size()/2){
                countFwd++;
            }
            if(s[i]==')' && i>=s.size()/2){
                countBwd++;
            }
        }
        int z = min(countFwd,countBwd);
        cout << 2*z << endl;
    }
}