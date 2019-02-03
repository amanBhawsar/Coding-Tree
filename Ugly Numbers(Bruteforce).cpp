#include <iostream>
using namespace std;

int isUgly(int k){
    while(k%5==0){
        k=k/5;
    }
    while(k%3==0){
        k=k/3;
    }
    while(k%2==0){
        k=k/2;
    }
    if(k==1){
        return 1;
    }
    return 0;
}

int main() {
    int t,n,i;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=1;;i++){
            if(isUgly(i)){
                n--;
                if(n==0){
                    break;
                }
            }
        }
        cout << i << endl;
    }
	return 0;
}
