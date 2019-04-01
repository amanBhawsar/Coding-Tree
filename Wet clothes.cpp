#include <iostream>
using namespace std;
int main() {
	int n,m,g,d,min,c;
	cin >> n >> m >> g;
	int an[105],am[105];
    for(int i=0;i<n;i++){
        cin >> an[i];
    }
    for(int i=0;i<m;i++){
        cin >> am[i];
    }
    d=an[1]-an[0];
    for(int i=2;i<n;i++){
        min=an[i]-an[i-1];
        if(min>d){
            d=min;
        }
    }
    for(int i=0;i<m;i++){
        if(am[i]<=d)
            c++;
    }
    cout << c << endl;
}
