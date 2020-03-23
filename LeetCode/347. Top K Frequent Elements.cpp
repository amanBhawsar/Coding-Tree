class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for (auto x : umap){
            v.push_back({x.second,x.first});        
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i=v.size()-1;k--;i--){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};