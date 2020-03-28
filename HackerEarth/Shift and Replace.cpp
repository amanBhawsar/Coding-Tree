#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,q,x,b,z,c;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin >> q;
		v.push_back(q);
	}	
	cin >> q;
	while(q--){
		cin >> x >> b;
		v[x-1]=b;
		int maxi=INT_MIN,ind=0,count,kk=n;//min n-maxi+ind, n
		if(n>50){
			kk=50;
		}
 
		for(int i=0;i<kk;i++){
			z=n;
			c=1;
			count=0;
			for(int j=i;z--;j=(j+1)%n){
				if(v[j]==c)
					count++;
				c++;
			}
			if(maxi<count){
				maxi=count;
				ind=i;
			}
		}
		cout << min(n,n-maxi+ind) <<endl;
	}
}