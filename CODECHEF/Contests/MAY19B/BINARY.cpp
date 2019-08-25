#include <iostream>
using namespace std;
int arr[10000];
int main(){
    int t,n,z;
    cin >> t;
    while(t--){
        cin >> n >> z;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int s=n;
        while(z--){
            for(int i=0;i<n;i++){
                if(arr[i]==0 && arr[i+1]==1){
                    arr[i]=1;
                    arr[i+1]=0;
                    i++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << arr[i]<< " ";
        }
        cout<< endl;
    }
}