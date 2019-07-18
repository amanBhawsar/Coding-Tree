#include<bits/stdc++.h>
using namespace std;

int arr[100][100]={0};
int dropEggs(int n,int k){
    if(arr[n][k]==0){
        if(k==1 || k==0)
            arr[n][k]= k;
        else if(n==1)
            arr[n][k]= k;
        else{
            int min=100000,temp;
            for(int i=1;i<=k;i++){
                temp = max(dropEggs(n-1,i-1),dropEggs(n,k-i));
                if(min>temp){
                    min=temp;
                }
            }
            arr[n][k]=min+1;
        }
    }
    return arr[n][k];
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    cout << dropEggs(n,k)<<endl;
	}
	return 0;
}