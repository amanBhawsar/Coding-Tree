#include <bits/stdc++.h>
using namespace std;

int BitsSetTable256[256]; 
  
void initialize()  {
    BitsSetTable256[0] = 0;  
    for (int i = 0; i < 256; i++) 
    {  
        BitsSetTable256[i] = (i & 1) +  
        BitsSetTable256[i / 2];  
    }  
}  
int countSetBits(int n)  
{  
    return (BitsSetTable256[n & 0xff] +  
            BitsSetTable256[(n >> 8) & 0xff] +  
            BitsSetTable256[(n >> 16) & 0xff] +  
            BitsSetTable256[n >> 24]);  
}  
int t,n,q,p,even=0,odd=0,k;
int main() {
   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	cin >>t;
	initialize();
	while(t--){
	    cin >> n >> q;
	    even=0;odd=0;
	    for(int i=0;i<n;i++){
	        cin >> k;
	        (countSetBits(k)%2==0)?even++:odd++;
	    }
	    while(q--){
	        cin >> k;
	        if(countSetBits(k)%2==0)
	            cout << even << " " << odd << "\n";
	        else
	            cout << odd << " " << even << "\n";
	    }
	}
	return 0;
}
