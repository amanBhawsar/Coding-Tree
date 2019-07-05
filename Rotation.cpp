#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,maxi=1001;
	string a,b; 
	cin >> n;
    cin >> a >> b;
    for(int i=0;i<n;i++){
        int last=-1;
        for(int j=0;j<n-i;j++){
            if(a[j]!=b[j]){
                last=j;
            }
        }
        if(i+last <= maxi){
            maxi=i+last;
        }
        rotate(a.begin(), a.begin()+1, a.end());
    }
    cout << maxi+1;
}