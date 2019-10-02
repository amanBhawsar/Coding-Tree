#include<iostream>
using namespace std;

int main(){
    long long p,q,r;
    cin >> p >> q >> r;
    if((q&r==0)&&(p==(q|r))){
        cout << p << " " << q << endl;
    }
    else{
        cout << "-1"<< endl;
    }
	return 0;
}
