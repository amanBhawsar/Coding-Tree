#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int row,col,k;
        cin >> row >> col >> k;
        int l,r,u,d;
        l=row-k;
        r=row+k;
        u=col-k;
        d=col+k;
        if(l<1){
            l=1;
        }
        if(u<1){
            u=1;
        }
        if(r>8){
            r=8;
        }
        if(d>8){
            d=8;
        }
        int count = (r-l+1)*(d-u+1);
        cout << count << endl;
    }
    return 0;
}
