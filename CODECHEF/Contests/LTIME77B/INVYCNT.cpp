#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int cnt[101]={0},inv=0,tot=0;
        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j])
                    inv++;
            }
        }
        sort(a,a+n);
        int j=1;
        cnt[j]=1;
        for(int i=1;i<n;i++){
            if(a[i-1]==a[i])
                cnt[j]++;
            else{
                j++;
                cnt[j]++;
            }
        }
        int d=n;
        for(int i=j;i>0;i--){
            tot=tot+cnt[i]*(d-cnt[i]);
            d=d-cnt[i];
        }
        tot=((tot*k*(k-1))/2)+inv*k;
        cout<<tot<<endl;
    }
}
