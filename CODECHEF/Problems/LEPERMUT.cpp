#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,z;
	    cin >> n;
	    vector<int> arr;
        for(int i=0;i<n;i++){
            cin >> z;
            arr.push_back(z);
        }
        int locInv=0,inv=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                locInv++;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    inv++;
                }
            }
        }
	    cout << (locInv==inv?"YES":"NO") << endl;
	}
	return 0;
}
