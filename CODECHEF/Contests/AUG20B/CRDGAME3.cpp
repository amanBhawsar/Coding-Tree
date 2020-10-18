#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        float a,b;
        cin>>a>>b;
        ll m,n;
        m=ceil(a/9);
        n=ceil(b/9);
        if(m<n)
            cout<<"0 "<<m<<endl;
        else
            cout<<"1 "<<n<<endl;
    }
}

