#include <bits/stdc++.h>
using namespace std;
#define FASTIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    FASTIO;
	int n,c=0,mini=INT16_MAX,k;
    bool ans=true;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mini>a[i])
            mini=a[i];
    }
    for(int i=0;i<n;i++)
        cin>>b[i];
    while(ans){
        ans=false;
        for(int i=0;i<n;i++){
            k = a[i] - mini;
            if(k>0){
                if(b[i]==0){
                    c=-1;
                    break;
                }
                k=k/b[i];
            }
            a[i]-=k*b[i];
            c+=k;
            while(a[i]>mini && a[i]>0){   
                a[i]-=b[i];
                ans=true;
                c++;
            }
            if(mini>a[i])
                mini=a[i];
        }
        if (mini<0){
            c=-1;
            break;
        }
    }
    cout << c;
    return 0;
}