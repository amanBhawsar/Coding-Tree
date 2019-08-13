#include <bits/stdc++.h>
using namespace std;


int main(){
    string S;
    cin >> S;
    try{
        int n;
        n=stoi(S);
        cout<<n;
    }
    catch(...){
        cout<<"Bad String";
    }
    return 0;
}

