#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// isSqSeq possible even>=2 or even==0
int main() {
	FASTIO
	long long int t;
	cin >> t;
	while(t--){
	    long long int n;
	    cin >> n;
	    vector<long long int> arr(n,0);
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        int c=0;
	        while(arr[i]%2==0){
	            c++;
	            arr[i]=arr[i]/2;
	            if(c==2)
	                break;    
	        }
	        if(c==2){
	            arr[i]=2;
	        }else{
	            arr[i]=c;
	        }
	       // cout << arr[i] << " ";
	    }
	    long long int ans=0;
	    //1st  Number of subarrays having absolute sum greater than 1
	    vector<long long int> cpyArr=arr;
	    
	    for(int i=1;i<n;i++){
	        cpyArr[i]+=cpyArr[i-1];
	        if(cpyArr[i]>1)
	            ans++;
	    }
	    if(cpyArr[0]>1)
	        ans++;
	    sort(cpyArr.begin(),cpyArr.end());
	    for(int i=0;i<n;i++)
	        ans+=n-(upper_bound(cpyArr.begin(),cpyArr.end(),cpyArr[i]+1)-cpyArr.begin());
	    //2nd  For handling odd case Number of subarrays having sum less than 1
        long long int i=0,j=0,sum=arr[0];
        while(i<n && j<n){
            if(sum<1){
                j++;
                if(i<=j)
                    ans+=j-i;
                if(j<n)
                    sum+=arr[j];
            }else{
                sum-=arr[i];
                i++;
            }
        }
        cout << ans << "\n";
	}
	return 0;
}