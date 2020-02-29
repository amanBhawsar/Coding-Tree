#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=10;
    while(t--){
        int z;
        set<int> s;
        for(int i=0;i<10;i++){
            cin >> z;
            s.insert(z%42);
        }
        cout << s.size() << endl;
        s.clear();
    }
    return 0;
}
