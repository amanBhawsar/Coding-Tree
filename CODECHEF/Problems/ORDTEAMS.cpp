#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    unordered_map<int,int> mapp;
	    int a[3],b[3],c[3],s[3];
	    for(int i=0;i<3;i++){
	        cin >> a[i] >> b[i] >> c[i];
	        s[i]=a[i]+b[i]+c[i];
	       // cout<< s[i] <<" ";
	        mapp[s[i]]=i;
	    }
	    sort(s,s+3);
	    int flag=0;
	    for(int j=2;j>=1;j--){
	        int i = mapp[s[j]];
	        int k = mapp[s[j-1]];
	       // cout << s[j] << " ";
	        int co=0;
	        if(a[i]==a[k]){
	            co++;
	        }
	        if(b[i]==b[k]){
	            co++;
	        }
	        if(c[i]==c[k]){
	            co++;
	        }
	        if(co==3){
	            flag=1;
	            break;
	        }
	        if(a[i]>=a[k] && b[i]>=b[k] && c[i]>=c[k]){
	            //do nothing
	        }else{
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        cout << "yes" << endl;
	    }else{
	        cout << "no" << endl;
	    }
	}
	return 0;
}
