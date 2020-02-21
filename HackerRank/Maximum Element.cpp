#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,type,top=-1,k;
    cin >> n;
    int arr[n];
    int maxi=0;
    while(n--){
        cin >> type;
        if(type == 1){
            cin >> k;
            top++;
            arr[top]=k;
            maxi=max(maxi,k);
        }else if(type == 2){
            if(arr[top]==maxi){
                maxi=0;
                for(int i=0;i<top;i++){
                    maxi = max(maxi,arr[i]);
                }
            }
            top--;
        }else{
            cout << maxi << endl;
        }
    }
    return 0;
}
