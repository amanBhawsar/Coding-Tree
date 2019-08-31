#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,m,n,o,f=0;
	    cin >> a >> b >> c >> m >> n >> o;

	    if(a==b){
	        if(m!=n){
	            f=1;
	        }
	    }else if(a>b){
	        if(m<=n){
	            f=1;
	        }
	    }else{
	        if(m>=n){
	            f=1;
	        }
	    }

	    if(c==b){
	        if(o!=n){
	            f=1;
	        }
	    }else if(c>b){
	        if(o<=n){
	            f=1;
	        }
	    }else{
	        if(o>=n){
	            f=1;
	        }
	    }

	    if(c==a){
	        if(o!=m){
	            f=1;
	        }
	    }else if(c>a){
	        if(o<=m){
	            f=1;
	        }
	    }else{
	        if(o>=m){
	            f=1;
	        }
	    }

	    if(f==1){
	        cout << "NOT FAIR" << endl;
	    }else{
	        cout << "FAIR" << endl;
	    }
	}
	return 0;
}
