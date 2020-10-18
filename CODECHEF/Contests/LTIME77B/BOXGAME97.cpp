#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        long long int a[n],mx[n],mn[n];
        cin>>a[0];
        int mini=0,maxi=0;
        long long int maxm=a[0],minm=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]<minm){
                minm=a[i];
                mini=i;
            }
            if(a[i]>maxm){
                maxm=a[i];
                maxi=i;
            }
        }
        mx[0]=a[1];
        mn[0]=a[1];
        mx[n-1]=a[n-2];
        mn[n-1]=a[n-2];
        for(int i=1;i<n-1;i++){
            mn[i]=max(a[i-1],a[i+1]);
            mx[i]=min(a[i-1],a[i+1]);
        }
        sort(mx,mx+n);
        sort(mn,mn+n);
        if(p==0){
            if(k%2==1){
                cout<<a[maxi]<<endl;
            }
            else{
                cout<<mx[n-1]<<endl;
            }

        }
        if(p==1){
            if(k%2==1){
                    cout<<a[mini]<<endl;
            }
            else
               cout<<mn[0]<<endl;
        }
    }
}
