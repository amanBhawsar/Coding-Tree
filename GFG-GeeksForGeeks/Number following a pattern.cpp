#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
    while(test--){
        string s;
        cin>>s;
        stack <int> st;
        vector<int> v;
        for(int i=0;i<=s.size();i++){
            st.push(i+1);
            if(s[i]=='I' || i==s.size()){
                while(!st.empty()){
                    v.push_back(st.top());
                    st.pop();
                }
            }
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i];
        cout<<endl;
    }
	return 0;
}