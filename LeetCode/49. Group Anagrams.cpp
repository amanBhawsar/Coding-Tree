class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        int n=strs.size();
        string z;
        for(int i=0;i<n;i++){
            z=strs[i];
            sort(z.begin(),z.end());
            umap[z].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto i: umap){
            ans.push_back(i.second);
        }
        return ans;
    }
};