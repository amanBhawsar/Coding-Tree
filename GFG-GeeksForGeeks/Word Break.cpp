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

bool wordBreak(string s,int n){
    for(int i=0;i<=n;i++){
        string prefix = s.substr(0,i);
        if(dictContains(prefix)){
            if(i==n){
                return true;
            }
            return wordBreak(s.substr(i,n-i),n-i);
        }
    }
    return false;
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
        if(wordBreak(s,s.size())){
            cout <<"1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}