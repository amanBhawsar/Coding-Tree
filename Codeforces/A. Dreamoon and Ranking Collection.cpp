#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	int t;
	cin >> t;
	while(t--){
		int n,x,k;
		cin >> n >> x;
		int arr[101]={0};
		for(int i=0;i<n;i++){
			cin >> k;
			arr[k]++;
		}
		int i;
		for(i=1;i<=100;i++){
			if(arr[i]==0){
				if(x==0)
					break;
				x--;
			}
		}
		cout << i-1+x << endl;
	}
	return 0;
}