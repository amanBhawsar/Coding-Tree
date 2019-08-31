#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m,k=0,d=0,c=0;
        cin >> n >> m;
        int p=n*m;

        for(int z=1;z<=p;z++){
            c=0;
            int s=0;
            if(z==1){
                cout << p << " ";
                continue;
            }
            int arr[1000][1000]={0};
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                     if(s%z==0){
                         arr[i][j]++;
                     }
                     s++;
                }
            }
            s=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(s%z==0){
                         arr[j][i]++;
                     }
                     s++;
                    if(arr[j][i]!=0){
                        c++;
                    }
                }
            }
            cout << c <<" ";
        }
        cout << endl;
    }
    return 0;
}
