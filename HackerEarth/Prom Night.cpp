#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        int boys[m];
        int girls[n];
        for(int i=0;i<m;i++){
            cin >> boys[i];
        }
        for(int i=0;i<n;i++){
            cin >> girls[i];
        }
        if(m>n){
            cout << "NO" << endl;
            continue;
        }else{
            int i=0,f=0,j=0;
            sort(boys,boys+m);
            sort(girls,girls+n);
            while(i<m){
                if(boys[i]>girls[j]){
                    i++;j++;
                }else{
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}