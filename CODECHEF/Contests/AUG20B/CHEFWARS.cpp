#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,p;
        cin>>h>>p;
        while(h>0){
            h=h-p;
            p=floor(p/2);
            if(p>h || (p==0 && h==0)){
                cout<<"1"<<endl;
                break;
            }
            else if(p==0 && h!=0){
                cout<<"0"<<endl;
                break;
            }
        }
    }
}
