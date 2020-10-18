#include <bits/stdc++.h>
#define ll long long int
#define MAX 100000
using namespace std;

//this function is taken from geeks for geeks
int multiply(int x, int res[], int res_size) { 
    int carry = 0; 
    for (int i = 0; i < res_size; i++) { 
        int prod = res[i] * x + carry; 
        res[i] = prod % 10; 
        carry = prod / 10; 
    } 
    while (carry) { 
        res[res_size] = carry % 10; 
        carry = carry / 10; 
        res_size++; 
    } 
return res_size; 
} 

ll power(int x, int n) 
{ 
    ll p=0;
    if(n == 0 ){  
        return 1; 
    } 
    int res[MAX]; 
    int res_size = 0; 
    int temp = x; 
    while (temp != 0) { 
        res[res_size++] = temp % 10; 
        temp = temp / 10; 
    } 
    for (int i = 2; i <= n; i++) 
        res_size = multiply(x, res, res_size); 
    for (int i = res_size - 1; i >= 0; i--) 
        p=p*10+res[i]; 
    return p;
} 

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,a,p,s,b,c,d,e,f;
	    cin>>n;
	    cin>>a;
	    p=power(10,n);
	    s=2*p+a;
	    cout<<s<<endl;
	    cin>>b;
	    c=p-b;
	    cout<<c<<endl;
	    cin>>d;
	    e=p-d;
	    cout<<e<<endl;
	    cin>>f;
	}
}
