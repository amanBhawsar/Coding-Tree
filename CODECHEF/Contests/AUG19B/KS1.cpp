#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >>arr[i];
        }
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]^arr[i];
        }
    	unsigned long long c=0;
    	unsigned long long sum=0;
    	int x=0;
        unordered_map<int,vector<int>> h;
        h[0].push_back(-1);
        set <int, greater <int> > uniq;
        for(int i=0;i<n;i++){
            x=arr[i];
            uniq.insert(x);
            h[x].push_back(i);
        }
        set <int, greater <int> > :: iterator itr; 
        for (itr = uniq.begin(); itr != uniq.end(); ++itr){
            int u = *itr;
            sum=0;
            for (int z:h[u]){
                sum+=z;
            }
            vector<int> vec = h[u];
            int s = vec.size();
            for(int i=s-1;i>=0;i--){
                sum=sum-vec[i];
                c+=vec[i]*i-sum-i;
            }
        }
    	cout<<c<< endl;
    }
	return 0; 
}