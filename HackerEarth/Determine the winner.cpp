#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
    while(t--){
        unsigned long long n,k;
        cin >> n >> k;
        if(n%(k+1)==0){
            cout << "Dishant" <<endl;
        }else{
            cout << "Arpa" <<endl;
        }
    }
}