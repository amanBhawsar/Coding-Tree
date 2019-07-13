#include <bits/stdc++.h>
using namespace std;

int m;
string dict[21];

bool dictContains(string &word){
    for(int i=0;i<m;i++){
        if(dict[i].compare(word)==0){
            return true;
        }
    }
    return false;
}

void wordBreak(string s,int n,string ans){
    for(int i=0;i<=n;i++){
        string prefix = s.substr(0,i);
        if(dictContains(prefix)){
            if(i==n){
                ans += prefix;
                cout << "(" << ans << ")";
                return;
            }
            wordBreak(s.substr(i,n-i),n-i,ans+prefix+" ");
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> dict[i];
        }
        string s;
        cin >> s;
        wordBreak(s,s.size(),"");
        cout << endl;
    }



    return 0;
}