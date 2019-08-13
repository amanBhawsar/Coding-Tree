#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    if(c1>c2){
        cout << 10000 << endl;
        return 0;
    }
    else{
        if(c1<c2){
            cout << 0 << endl;
            return 0;
        }
    }
    if(b1>b2){
        cout << 500*(b1-b2) << endl;
    }
    else if(a1>a2){

        cout << 15*(a1-a2) << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}