#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q,k,a;
    string s;
    cin >> q;
    map<string,int> mp;
    while(q--){
        cin >> k;
        if(k==1){
            cin >> s >> a;
            mp[s]+=a;
        }else if(k==2){
            cin >> s;
            mp[s]=0;
        }else{
            cin >> s;
            cout << mp[s] << "\n";
        }
    }
    
    return 0;
}