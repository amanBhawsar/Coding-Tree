#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,k,temp,count=0;
	    cin>>n>>k;
	    vector <int>vect;
	    for(int i=0;i<n;i++){
	        cin >> temp;
	        vect.push_back(temp);
	    }
	    sort(vect.begin(),vect.end());
	    for(int i=0;i<n;i++){
	        if(k>=vect[i]){
	            k-=vect[i];
	            count++;
	        }else{
	            break;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}