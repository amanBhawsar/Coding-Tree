#include<iostream>
using namespace std;
int main(){
    int n,a,x,b,y,f=0;
    cin >> n>> a >> x >> b >> y;
    while(1){
        if(a==b){
            f=1;
            cout << "YES" <<endl;
            break;
        }
        if(a==x || b==y){
            break;
        }
        a=a%n+1;
        b--;
        if(b==0){
            b=n;
        }

    }
    if(f==0){
        cout << "NO" <<endl;
    }
	return 0;
}