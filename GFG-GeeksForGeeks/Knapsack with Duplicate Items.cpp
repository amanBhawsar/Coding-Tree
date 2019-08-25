#include<bits/stdc++.h>
using namespace std;

int knapsack(int w, int n, int wt[], int val[]){
    int K[w+1]={0};
    for(int i=0;i<=w;i++){
        for(int j=0;j<n;j++){
            if(i>=wt[j])
                K[i]=max(val[j]+K[i-wt[j]], K[i]);
        }
    }
    return K[w];
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
        int n,w;
        cin>>n>>w;
    	int wt[n],val[n];
        for(int i=0;i<n;i++)
            cin>>val[i];
        for(int i=0;i<n;i++)
            cin>>wt[i];
        cout<<knapsack(w, n, wt, val)<<endl;
	}
	return 0;
}