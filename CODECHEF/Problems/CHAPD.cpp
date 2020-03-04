#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,flag; long long int a,b,g;
    cin>>t;
    while(t--){
        cin>>a>>b; flag=1; 
        if(b==1){
            cout<<"Yes"<<endl;
            continue;
        }
        g=__gcd(a,b);
        while(g!=1){
            g=__gcd(a,b);
            b=b/g;
            if(b==1){
                flag=0;
                cout<<"Yes"<<endl; break;
            }
        }
        if(flag) cout<<"No"<<endl;
    }
	return 0;
}
