class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        for(int i=0;i<m;i++){
            ans.push_back(i+1);  
        }
        vector<int> fans;
        int pos;
        vector<int>::iterator it;
        for(int i=0;i<queries.size();i++){
            it = std::find (ans.begin(), ans.end(), queries[i]); 
            pos = it - ans.begin();
            fans.push_back(pos);
            rotate(ans.begin(), ans.begin()+pos, ans.begin()+pos+1);
        }
        return fans;
    }
};