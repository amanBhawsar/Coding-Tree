#include <iostream>
using namespace std;
long int uglyArr[10001]={0};
long int ind=0;
long int index2=0,index3=0,index5=0,valmin,valmin2=2,valmin3=3,valmin5=5;
int main() {
	long int t;
	cin >> t;
	while(t--){
	    long int n;
	    cin >> n;
	    uglyArr[0]=1;
	    if(uglyArr[n-1]!=0){
	        cout << uglyArr[n-1] << endl;
	        continue;
	    }
	    for(int i=ind+1;i<n;i++){
	        valmin=min(valmin2,min(valmin3,valmin5));
	        uglyArr[i]=valmin;
	        if(valmin==valmin2){
	            index2++;
	            valmin2=uglyArr[index2]*2;
	        }
	        if(valmin==valmin3){
	            index3++;
	            valmin3=uglyArr[index3]*3;
	        }
	        if(valmin==valmin5){
	            index5++;
	            valmin5=uglyArr[index5]*5;
	        }
	        
	    }
	    ind=n-1;
	    cout << valmin << endl;
	}
	return 0;
}