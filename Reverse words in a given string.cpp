#include <iostream>
#include <stack>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    char arr[3000];
	    cin >> arr;
	    stack<char> final;
	    stack<char> temp;
	    int i=0;
	    while(arr[i]!='\0'){
	        if(arr[i]=='.'){
	            while(!temp.empty()){
	                final.push(temp.top());
	                temp.pop();
	            }
	            final.push('.');
	        }else{
	            temp.push(arr[i]);
	        }
	        i++;
	    }
	    while(!temp.empty()){
	                final.push(temp.top());
	                temp.pop();
	    }
	    
	    while(!final.empty()){
	                cout << final.top();
	                final.pop();
	    }
	    cout << endl;
	}
	return 0;
}