#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin >> m >> n;
        int pdt = m*n;
        if(pdt%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
