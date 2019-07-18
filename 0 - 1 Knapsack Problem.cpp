#include<bits/stdc++.h>
using namespace std;

int wt[1001]={0};
int val[1001]={0};
int knapSack(int n,int w){
    int ks[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0){
                ks[i][j]=0;
            }else if(wt[i-1]<=j){
                ks[i][j]=max(ks[i-1][j],val[i-1]+ks[i-1][j-wt[i-1]]);
            }else{
                ks[i][j]=ks[i-1][j];
            }
        }
    }
    return ks[n][w];
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,w;
	    cin>>n>>w;
	    for(int i=0;i<n;i++){
	        cin>>val[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>wt[i];
	    }
	    cout << knapSack(n,w)<<endl;
	}
	return 0;
}