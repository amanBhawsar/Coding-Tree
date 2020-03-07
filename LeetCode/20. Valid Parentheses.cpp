class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int f=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    f=1;
                    break;
                }
                if((st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']') || (st.top()=='(' && s[i]==')')){
                    st.pop();
                }else{
                    f=1;
                    break;
                }
            }
        }
        if(!st.empty()){
            f=1;
        }
        return (f?false:true);
    }
};