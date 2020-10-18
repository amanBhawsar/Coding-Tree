#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        double a[n],sum=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            sum=sum+a[j];
        }
        double mean=(sum)/n;
        bool ans=true;
        int j=0;
        for(;j<n;j++){
            if(a[j]==mean){
                cout<<j+1<<endl;
                ans=false;
                break;
            }
        }
        if(ans) cout<<"Impossible"<<endl;
    }
}
