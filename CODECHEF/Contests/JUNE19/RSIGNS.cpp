#include <iostream>
using namespace std;

long long power(int n,unsigned long long k){
    if(k==0){
        return 1;
    }
    unsigned long long temp=power(n,k/2)%1000000007;
    if(k%2==0){
        return (temp*temp)%1000000007;
    }else{
        return (n*((temp*temp)%1000000007))%1000000007;
    }
}

int main() {
    int t,n;
    cin>>t;
	while(t--){
	    cin>>n;
	    unsigned long long ans = 10*power(2,n-1);
	    cout << ans%1000000007<<endl;
	}
    return 0;
    
    
    
// 	int t,n;            //this was for partial solution which gave me the pattern i was looking for, i.e. 10*2^(k-1) 
// 	cin>>t;
// 	while(t--){
// 	    cin>>n;
// 	    int uppLmt=1;
// 	    for(int i=0;i<n;i++){
// 	        uppLmt*=10;
// 	    }
// 	    int a,b,dig,ans=0;
// 	    for(int i=0;i<uppLmt;i++){
// 	        int arr[10]={0};
// 	        a=i;
// 	        b=uppLmt-1-i;
// 	        do{
// 	            dig=a%10;
// 	            arr[dig]++;
// 	            a=a/10;
// 	        }while(a);
// 	        do{
// 	            dig=b%10;
// 	            arr[dig]++;
// 	            b=b/10;
// 	        }while(b);
// 	        int count=0;
// 	        for(int j=0;j<10;j++){
// 	            if(arr[j]>0){
// 	                count++;
// 	            }
// 	        }
// 	        if(count==2){
// 	            ans++;
// 	        }
// 	    }
// 	    cout << ans<< endl;
// 	}
// 	return 0;
}
