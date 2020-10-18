#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,m,sum=0;
        cin>>n>>m;
        sum=sum+n*m;
        ll a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        ll c=(min(m,n)+1)/2;
        ll d=1;
        while(d<c){
        for(int i=d;i<n-d;i++){
            for(int j=d;j<m-d;j++){
                int flag = 0; 
                for (int k = 1;d-k>=0; k++) {
                    if (a[i][j-k] != a[i][j+k] || a[i-k][j] != a[i+k][j]) { 
                    flag = 1; 
                    break; 
                     } 
                }
                if(flag==0)
                    sum=sum+1;
            }
        }
        d++;
        }
        cout<<sum<<endl;
    }
}