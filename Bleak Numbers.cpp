#include<bits/stdc++.h>
using namespace std;
int arr[10001]={0};

int countBits(int n){
    if(n==0){
        return 0;
    }
    return (n&1)+countBits(n/2);
}

int main()
{
    for(int i=1;i<=10000;i++){
        arr[i+countBits(i)]++;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(arr[n]==0){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}