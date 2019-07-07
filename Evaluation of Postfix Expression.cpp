#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int op1,op2;
	    string str;
	    cin >> str;
	    stack <int>st;
	    for(int i=0;i<str.length();i++){
	        if(str[i]>='0' && str[i]<='9'){
	            st.push(str[i]-'0');
	        }else{
	            op1 = st.top();
	            st.pop();
	            op2 = st.top();
	            st.pop();
	            if(str[i]=='+'){
	                st.push(op2+op1);
	            }else if(str[i]=='-'){
	                st.push(op2-op1);
	            }else if(str[i]=='*'){
	                st.push(op2*op1);
	            }else{
	                st.push(op2/op1);
	            }
	        }
	    }
	    cout << st.top() << endl;
	}
	return 0;
}