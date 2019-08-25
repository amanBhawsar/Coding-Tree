#include<bits/stdc++.h>
using namespace std;

void nextLargerElement(long arr[],long n){
    stack<long> st;
    long vec[n];
    for(long i=n-1;i>=0;i--){
        while(st.empty()==false && arr[i]>st.top()){
            st.pop();
        }
        if(st.empty()){
            vec[i]=-1;
        }else{
            vec[i]=st.top();
        }
        st.push(arr[i]);
    }
    for(long i=0;i<n;i++){
	    cout << vec[i] << " ";
	}
}

int main()
 {
	long t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long arr[n];
	    for(long i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    nextLargerElement(arr,n);
	    cout << endl;
	}
	
	return 0;
}