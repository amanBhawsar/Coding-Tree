#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin >> a >> b;
	    int ac[26]={0};
	    int bc[26]={0};
	    if(a.length()!=b.length()){
	        cout << "NO" << endl;
	        continue;
	    }
	    for(int i=0;i<a.length();i++){
	        ac[a[i]]++;
	        bc[b[i]]++;
	    }
	    int correct=1;
	    for(int i=0;i<26;i++){
	        if(ac[i]!=bc[i]){
	            correct=0;
	            break;
	        }
	    }
	    if(correct){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}