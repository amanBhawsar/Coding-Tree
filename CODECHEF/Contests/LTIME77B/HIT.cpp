#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int x,y,z;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        x=a[n/4];
        y=a[(2*n)/4];
        z=a[(3*n)/4];
        if(x!=y && x!=a[(n/4)-1] && x!=z && y!=z && y!=a[((2*n)/4)-1] && z!=a[((3*n)/4)-1]){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
