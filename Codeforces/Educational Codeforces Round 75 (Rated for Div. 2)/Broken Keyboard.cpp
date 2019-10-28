#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string ans="";
        for(int i=0;i<str.length();i++){
            if(str[i]==str[i+1]){
                i++;
            }else{
                ans+=str[i];
            }
        }
        sort(ans.begin(),ans.end());
        auto res = unique(ans.begin(), ans.end());
        cout << string(ans.begin(), res) << endl;
    }
        return 0;
}
