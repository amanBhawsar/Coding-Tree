#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string,string> ph;
    int n;
    cin >> n;
    while(n--){
        string a,b;
        cin >> a >> b;
        ph[a]=b;
    }
    string q;
    while(cin >> q){
        if(ph.find(q)!=ph.end()){
            cout << q << "=" << ph.find(q)->second << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}

