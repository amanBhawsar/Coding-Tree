#include <stdio.h>
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}

int main(){
    long long int t,n,a,b,k,c;
    cin >> t;
    while(t--){
        cin >> n >> a >> b >> k;
        if(a==b){
            cout << "Lose" << endl;
            continue;
        }
        c = (a*b)/gcd(a,b);
        c = 2*(n/c);
        c = n/a + n/b - c;
        if(c>=k){
            cout << "Win" << endl;
        }
        else{
            cout << "Lose" << endl;
        }
    }
    return 0;
}
