#include<bits/stdc++.h>
using namespace std;

bool isValid(int num){
    if(num==0){
        return true;
    }
    int s = num%10;
    num=num/10;
    if(s==1 || s==2 || s==3){
        return isValid(num);
    }else{
        return false;
    }
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,found=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            if(isValid(arr[i])){
	                found=1;
	                cout << arr[i] << " ";
	            }
	        }else{
	            continue;   
	        }
	    }
	    if(found == 0){
	        cout << "-1";
	    }
	    cout << endl;
	}
	return 0;
}