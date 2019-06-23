#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char nut[10];
	    char bolt[10];
	    for(int  i=0;i<n;i++){
	        cin >> nut[i];
	    }   
	    for(int  i=0;i<n;i++){
	        cin >> bolt[i];
	    }
	    sort(nut,nut+n);
	    sort(bolt,bolt+n);
	    for(int  i=0;i<n;i++){
	        cout << nut[i] << " ";
	    }
	    cout << endl;
	    
	    for(int  i=0;i<n;i++){
	        cout << bolt[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}