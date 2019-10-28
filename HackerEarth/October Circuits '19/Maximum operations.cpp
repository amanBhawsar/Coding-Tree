#include <iostream>
#include <stdlib.h>     /* strtoull */
using namespace std;

int xnor(int a, int b) 
{ 
    // Make sure a is larger 
    if (a < b) 
        swap(a, b);  
  
    if (a == 0 && b == 0)  
        return 1;  
    int a_rem = 0; 
    int b_rem = 0;
    int count = 0;  
    int xnornum = 0; 
    while (a){
        a_rem = a & 1;  
        b_rem = b & 1;  
        if (a_rem == b_rem)         
            xnornum |= (1 << count); 
        count++;  
        a = a >> 1; 
        b = b >> 1;  
    } 
    return xnornum; 
} 

int main() {
	int t;
	cin >>t;
	while(t--){
	    unsigned long long a,b,n,c,c1,ans;
	    cin >>a >>b >>n;
	    c=a^b;
	    c1=xnor(a,b);
	    int mod = n%3;
	    if(mod==0){
	        ans = max(c,c1);
	    }else if(mod==1){
	        ans = a;
	    }else{
	        ans = b;
	    }
	    cout << ans << endl;
	    
	}
	
}
