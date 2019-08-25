#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin >> s;
	    int len = s.length();
	    int arr[26]={0};
	    for(int i=0;i<len;i++){
	        arr[s[i]-'a']++;
	    }
	    int max=-1;
	    for(int i=0;i<26;i++){
	        if(max<arr[i]){
	            max=arr[i];
	        }
	    }
	    if(len%2==0){
	        len=len/2;
	        if(len>=max){
	            cout << "1" << endl;
	        }else{
	            cout << "0" << endl;
	        }
	    }else{
	        len = len/2;
	        len++;
	        if(len>=max){
	            cout << "1" << endl;
	        }else{
	            cout << "0" << endl;
	        }
	    }
	}
	return 0;
}