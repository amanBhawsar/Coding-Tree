class Solution {
public:
    void getAllString(set<string>& st, string prev, int k){
        if(k==0){
            st.insert(prev);
            return;
        }
        if(prev.size()==0){
            string s1;
            string s2;
            string s3;
            s1=prev+'a';
            getAllString(st,s1,k-1);
            s2=prev+'b';
            getAllString(st,s2,k-1);
            s3=prev+'c';
            getAllString(st,s3,k-1);
        }else{
            string s1;
            if(prev.back()!='a'){
                s1=prev+'a';
                getAllString(st,s1,k-1);
            }
            string s2;
            if(prev.back()!='b'){
                s2=prev+'b';
                getAllString(st,s2,k-1);
            }
            string s3;
            if(prev.back()!='c'){
                s3=prev+'c';
                getAllString(st,s3,k-1);
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string> ans;
        set<string> st;
        getAllString(st,"",n);
        for(auto i:st){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()<k){
            return "";
        }
        return ans[k-1];
    }
};