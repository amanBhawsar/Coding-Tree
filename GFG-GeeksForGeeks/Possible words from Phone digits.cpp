#include<bits/stdc++.h>
using namespace std;

string str[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string ans="";
void getDigits(int arr[],int n,int i){
    if(i==n){
        cout<<ans<<" ";
    }else{
        for(int j=0;j<str[arr[i]-2].size();j++){
            string temp = str[arr[i]-2];
            ans+=temp[j];
            getDigits(arr,n,i+1);
        }
    }
    ans.pop_back();
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    getDigits(arr,n,0);
	    cout << endl;
	    ans="";
	}
	return 0;
}