#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    stack <char>st;
	    stack <char>rev;
	    cin>>s;
	    int times=5;
	    while(times--){
            int f=0;
            for(int i=0;i<s.size();i++){
                if(!st.empty() && st.top()==s[i]){
                    f=1;
                    if(f==1 && i==s.size()-1){
                        st.pop();
                    }
                    
                    continue;
                }else{
                    if(f==1){
                        st.pop();
                        f=0;
                    }
                    st.push(s[i]);
                }
            }
            while(!st.empty()){
                rev.push(st.top());
                st.pop();
            }
            string nk="";
            while(!rev.empty()){
                nk=nk+rev.top();
                rev.pop();
            }
            
            s=nk;
	    }
	    cout << s << endl;
	}
	return 0;
}