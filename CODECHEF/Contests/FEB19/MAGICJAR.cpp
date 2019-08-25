#include<iostream>
using namespace std;
int main(){
    long int t,n,i,sum;
    long int a[100000]={0};
    cin >> t;
    while(t--){
        sum=0;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        cout << sum-n+1 <<endl;
    }
    return 0;
}
