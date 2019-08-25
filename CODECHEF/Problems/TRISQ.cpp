#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int b;
        cin >> b;
        if(b%2==1){
            b--;
        }
        b=b/2 - 1;
        cout << (b*(b+1))/2 << endl;
    }
	return 0;
}
