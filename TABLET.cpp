#include<iostream>
using namespace std;
int main(){
    long int i,t,n,b,w,h,p,ans;
    cin >> t;
    while(t--){
        ans=0;
        cin >> n >> b;
        for(i=0;i<n;i++){
            cin >> w >> h >> p;
            w=w*h;
            if(p<=b&&(w>ans)){
                ans = w;
            }
        }
        if(ans==0){
            cout << "no tablet" << endl;
        }
        else{
            cout << ans <<endl;
        }
    }
    return 0;
}
