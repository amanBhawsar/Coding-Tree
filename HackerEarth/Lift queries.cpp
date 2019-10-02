#include <iostream>

using namespace std;

int main() {
    int t,l=0,u=7;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n-l <= u-n){
            cout << "A" << endl;
            l = n;
        }
        else{
            cout << "B" << endl;
            u = n;
        }
    }
    return 0;
}