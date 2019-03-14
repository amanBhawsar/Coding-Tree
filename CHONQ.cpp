#include <bits/stdc++.h>
using namespace std;
int arr[100000];

int main(){
    int t;
    cin  >> t;
    while(t--){
        int n,k,i,min=INT_MAX,j=0,sum,p,ind;
        cin >> n >> k;
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        while(j<n-1){
            int m=j;

                sum=0;p=1;
                for(i=m;i<n;i++){   //calc for one
                    sum+=(arr[i]/(p++));
                }
            if(sum==k){
                ind=m+1;
                break;
            }
            if(sum<k){
                if(j==0)
                ind=m+1;
                j=(j+(n-j)/2);
            }
            else{

            }
        }
        cout << j+1 << endl;
    }
    return 0;
}
