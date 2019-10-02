#include <bits/stdc++.h>    //postfix = total sum - prefix[i] - arr[i]
using namespace std;
long long int prefix[300009]={0};
long long int postfix[300009]={0};

int main() {
    vector<long long int> arr;
    vector<long long int> common;
	long long int n,k,temp=0,i;
	
	cin >> n >> k;
	cin >> temp;
	arr.push_back(temp);
	for(i=1;i<n;i++){
	    prefix[i] = prefix[i-1]+temp;
	    cin >> temp;
	    arr.push_back(temp);
	}
	vector<long long int> arrCpy = arr;
	sort(arr.begin(),arr.end());
	postfix[n-2] = arr[n-1];
	for(i=n-3;i>=0;i--){
	    postfix[i] = postfix[i+1] + arr[i+1];
	}
	temp = arr[0];
	for(i=1;i<n;i++){
	    prefix[i] = prefix[i-1]+arr[i-1];
	}
	long long int min=LLONG_MAX,hk,imin;
	vector<long long int> dummy;
	for(i=0;i<n;i++){
	    
	   // cout << "arr"<<i<<" = "<<arr[i]<<endl;
	    hk = (2*i-n+1)*arr[i]-prefix[i]+postfix[i]-k;
	    if(hk<0){
	        common.push_back(arr[i]);
	       // cout << "common  "<<arr[i]<<"sjsj"<<endl;
	        continue;
	    }
	    
	    if(hk<min){
	        dummy.clear();
	        min = hk;
	        imin=i;
	    }
	    else if(hk==min){
	        dummy.push_back(arr[i]);
	    }
	}
	common.push_back(arr[imin]);
		      //  cout << "common  "<<arr[imin]<<"sjsj"<<endl;
    for(i=0;i<dummy.size();i++){
        common.push_back(dummy[i]);
    }
// 	sort(common.begin(),common.end());  //no use pushed in sorted order
// 	cout << "prefix: ";
// 	for(i=0;i<n;i++){
// 	    cout << prefix[i] << " "; //      Correct
// 	}	
// 	cout << endl;
// 	cout << "postfix: ";
// 	for(i=0;i<n;i++){
// 	    cout << postfix[i] << " "; //      Correct
// 	}
// 	cout << endl;
	for(i=0;i<n;i++){
	    if(binary_search(common.begin(), common.end(), arrCpy[i])){
	       long long int pk = lower_bound(arr.begin(), arr.end(), arrCpy[i])-arr.begin();
	       //min = (2*pk-n+1)*arr[pk]-prefix[pk]+postfix[pk]-k;
	       min = (pk-n+1)*arr[pk]-prefix[pk]+-k;
	       min += pk*arr[pk]+postfix[pk];
            if(min<0){
                min=0;
            }
	        break;
	    }   
	}
    cout << i+1 << " " << min << endl;
	return 0;
}