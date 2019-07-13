#include<bits/stdc++.h>
using namespace std;
int r=0,c=0;
int maxArea(int arr[15][15]){
    int dp[r+1][c+1];
    for(int i=0;i<c;i++){
        dp[0][i]=arr[0][i];
        for(int j=1;j<r;j++){
            dp[j][i]=(arr[j][i]==0)?0:dp[j-1][i]+1;
        }
    }
    
    for(int i=0;i<r;i++){
        int count[16]={0};
        for(int j=0;j<c;j++){
            count[dp[i][j]]++;
        }
        int colNo=0;
        for(int j=r;j>=0;j--){
            if(count[j]>0){
                for(int k=0;k<count[j];k++){
                    dp[i][colNo]=j;
                    colNo++;
                }
            }
        }
    }
    
    int currA,maxA=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            currA=(j+1)*dp[i][j];
            if(currA>maxA){
                maxA=currA;
            }
        }
    }
    return maxA;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    cin >> r >> c;
	    int arr[15][15];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin >> arr[i][j];
	        }
	    }
	    cout << maxArea(arr)<<endl;
	}
	return 0;
}