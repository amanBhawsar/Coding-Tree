#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,k,z;
		cin >> n;
		vector<int> empty;
		int arr[n+1];
		for(int i=0;i<=n;i++){
			arr[i]=0;
		}
		for(int i=0;i<n;i++){
			cin >> k;
			int f=0;
			while(k--){
				cin >>z;
				if(f==1){
					continue;
				}
				if(arr[z]!=1){
					f=1;
					arr[z]=1;
				}
			}
			if(f==0){
				empty.push_back(i+1);
			}
		}
		int unmarried=-1;
		for(int i=1;i<=n;i++){
			if(arr[i]==0){
				unmarried=i;
				break;
			}
		}
		if(unmarried==-1){
			cout << "OPTIMAL" << endl;
		}else{
			cout << "IMPROVE" << endl;
			cout << empty[0] << " " << unmarried << endl;
		}
	}
	return 0;
}