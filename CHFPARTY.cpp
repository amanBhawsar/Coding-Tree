#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i,t,n,p;
    cin >> t;
    while(t--){
        p=0;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<n;i++){
            if(p>=arr[i]){
                p++;
            }
            else{
                break;
            }
        }
        cout << p << endl;
    }
    return 0;
}
