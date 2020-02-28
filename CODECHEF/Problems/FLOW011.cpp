#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        float hra,da;
        cin >> a;
        if(a>=1500){
            hra=500;
            da=0.98*a;
        }
        else{
           hra=0.1*a;
           da=0.9*a;
        }
        cout << fixed << setprecision(2) << (a+hra+da) << endl;
    }
	return 0;
}