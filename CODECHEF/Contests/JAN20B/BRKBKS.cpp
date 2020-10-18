#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       float s,a,b,c,sum=0;
       cin>>s>>a>>b>>c;
           if(a+b+c<=s)
            cout<<1<<endl;
           else if(c+b<=s || a+b<=s)
            cout<<2<<endl;
           else
            cout<<3<<endl; 
   }
}