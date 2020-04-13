class Solution {
public:
    vector<string> stringMatching(vector<string>& s) {
        int n=s.size();
        set<string> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i].find(s[j]) != std::string::npos){
                    ans.insert(s[j]);
                }
                if(s[j].find(s[i]) != std::string::npos){
                    ans.insert(s[i]);
                }
            }
        }
        vector<string> ansv;
        for (auto elem : ans){
            ansv.push_back(elem);                
        }

        return ansv;
    }
};