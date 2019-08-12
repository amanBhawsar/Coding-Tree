#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c++;
            }else{
                c=0;
                if(i!=n-1){
                    if(s[i+1]=='1'){
                        s[i+1]='0';
                    }else{
                        s[i+1]='1';
                    }
                }
            }
        }
        if(c==0){
            cout << "WIN" << endl;
        }else{
            cout << "LOSE" << endl;
        }
    }
	return 0;
}
