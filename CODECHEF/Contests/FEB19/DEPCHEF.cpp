#include<iostream>
using namespace std;
int main(){
    int t,n,i,j;
    int a[110];
    int d[110];
    int defenceValue[110]={0};
    cin >> t;
    while(t--){
        j=0;
        int max=0;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            cin >> d[i];
        }
        for(i=1;i<=n-2;i++){
            if(a[i-1]+a[i+1] < d[i]){
                defenceValue[j]=d[i];
                j++;
            }
        }
        if(a[1]+a[n-1] < d[0]){
            defenceValue[j]=d[0];
            j++;
        }
        if(a[n-2]+a[0] < d[n-1]){
            defenceValue[j]=d[n-1];
            j++;
        }
        for(i=0;i<j;i++){
            if(max<defenceValue[i]){
                max=defenceValue[i];
            }
        }
        if(j==0){
            cout << "-1" << endl;
        }
        else{
            cout << max << endl;
        }
    }
    return 0;
}
