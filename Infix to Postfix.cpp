#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='*' || c=='/'){
        return 2;
    }else if(c=='+' || c=='-'){
        return 1;
    }else{
        return -1;
    }
}

void infixToPostfix(string exp){
    stack <char>st;
    st.push('t');
    int len = exp.length();
    for(int i=0;i<len;i++){
        if((exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z')){
            cout << exp[i];
        }
        else if(exp[i]=='('){
            st.push('(');
        }else if(exp[i]==')'){
            while(st.top()!='t' && st.top()!='('){
                cout << st.top();
                st.pop();
            }
            if(st.top()=='('){
                st.pop();
            }
        }else{
            while(st.top()!='t' && prec(exp[i]) <= prec(st.top())){
                cout << st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
    }
    while(st.top()!='t'){
        cout << st.top();
        st.pop();
    }
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string exp;
	    cin >> exp;
	    infixToPostfix(exp);
	    cout << endl;
	}
	return 0;
}