#include<iostream>
using namespace std;
int a[100000],b[100000];
int preb[100000],prea[100000];
int n,i;
int maxi(int k,int e){
    if(k>=e){
        return 0;
    }
    return max(preb[k],a[k]+maxi(k+1,e));
}
int maxil(int k){
    if(k==n-1){
        return 0;
    }
    int sum=0;
    for(i=k;i<n;i++){
        if((a[i]>b[i])||(prea[i]>preb[i])){
            sum+=a[i];
        }
        else{
            sum+=preb[i];
            break;
        }
    }
    return max(sum,a[k]+maxil(k+1));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=1000){    //old
            int sum=0;
            for(i=0;i<n;i++){
                cin >> a[i];
            }
            for(i=0;i<n;i++){
                cin >> b[i];
            }
            prea[n-1]=a[n-1];
            for(i=n-2;i>=0;i--){
                prea[i]=a[i]+ prea[i+1];
            }
            preb[n-1]=b[n-1];
            for(i=n-2;i>=0;i--){
                preb[i]=b[i]+ preb[i+1];
            }
            cout << maxil(0) << endl;
        }
        else{   //new
            int sum=0,s=0,e=n-1;
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            cin >> b[i];
        }

        for(i=0;i<n;i++){
            if(a[i]>=b[i]){
                sum+=a[i];
            }
            else{
                break;
            }
        }
        s=i;
        for(i=n-1;i>=s;i--){
            if(a[i]<=b[i]){
                sum+=b[i];
            }
            else{
                break;
            }
        }
        e=i;
        //prea[e]=a[e];
        preb[e]=b[e];
       // cout <<s <<endl;
        //cout << e <<endl;
        for(i=e-1;i>=s;i--){
            //prea[i]=a[i]+ prea[i+1];
            //cout << prea[i]<<endl;
            preb[i]=b[i]+ preb[i+1];
        }
        cout << sum+maxi(s,e) << endl;
        }
    }
}
