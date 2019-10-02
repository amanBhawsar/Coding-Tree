#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;
    while(t--){
        long int n;
        cin >> n;
        int f=0;
        long int pdt=1;
        if((n+1)%2==0){
            cout << "YES" << endl;
            continue;
        }
        n=n+1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                f=1;
                break;
            }
        }
        if(f==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
