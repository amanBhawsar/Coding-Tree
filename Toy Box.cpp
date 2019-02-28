#include <iostream>
using namespace std;

int main() {
	int q,b,m,n,sum=0;
	cin >> q >> b;
    int arr[b+1]={0};
    while(q--){
        cin >> m >> n;
        if(arr[n]<m){
            arr[n]=m;
        }
    }
    for(int i=1;i<=b;i++){
        sum+=arr[i];
    }
    cout << sum ;
}
