#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int *arr= (int *)malloc(sizeof(int)*n);
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int *lmin= (int *)malloc(sizeof(int)*n);
	    int *rmax= (int *)malloc(sizeof(int)*n);
	    lmin[0]=arr[0];
	    for(int i=1;i<n;i++){
	        lmin[i]=min(arr[i],lmin[i-1]);
	    }
	    rmax[n-1]=arr[n-1];
	    for(int i=n-2;i>=0;i--){
	        rmax[i]=max(arr[i],rmax[i+1]);
	    }
	    int i=0,j=0,diff=0;
	   // cout << i << " "<<n<<endl;
	    while((i<n)&&(j<n)){
	        if(lmin[i]<=rmax[j]){
	           // cout<<j-i<<endl;
	            diff=max(diff,j-i);
	            j++;
	        }
	        else{
	           // cout<<lmin<<" "<<rmax<<endl;
	            i++;
	        }
	    }
	    cout<<diff<<endl;
	}
	return 0;
}