#include <bits/stdc++.h> 
using namespace std;

int main() {
    stack <int> s1;
    stack <int> s2;
    int q,type,k;
    cin >> q;
    while(q--){
        cin >> type;
        if(type==1){
            cin >> k;
            s1.push(k);
        }else if(type==2){
            if(s2.empty()){
                while(!s1.empty()){
                    k = s1.top();
                    s1.pop();
                    s2.push(k);
                }
            }
            s2.pop();
        }else{
            if(s2.empty()){
                while(!s1.empty()){
                    k = s1.top();
                    s1.pop();
                    s2.push(k);
                }
            }
            cout << s2.top() << endl;
        }
    }
    return 0;
}
