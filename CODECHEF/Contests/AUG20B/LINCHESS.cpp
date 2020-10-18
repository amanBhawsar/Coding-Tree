#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p[n];
        int m=k+1;
        for(int i=0;i<n;i++){
            cin>>p[i];
            if(k%p[i]==0 && (k/p[i])<m){
                m=p[i];
            }
        }
        if(m!=k+1)
            cout<<m<<endl;
        else
            cout<<"-1"<<endl;
    }
}
