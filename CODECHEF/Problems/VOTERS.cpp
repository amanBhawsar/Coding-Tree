#include <bits/stdc++.h>
using namespace std;


int main() {
	int a,b,c,k;
	cin >> a >> b >> c;
	vector<int> arr;
    for(int i=0;i<a+b+c;i++){
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int currCount=1,currVal=arr[0];
	for(int i=1;i<arr.size();i++){
	    if(arr[i]==currVal){
	        currCount++;
	    }else{
	        if(currCount>=2){
	            ans.push_back(currVal);
	        }
	        currCount=1;
	        currVal=arr[i];
	    }
    }
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
	return 0;
}
