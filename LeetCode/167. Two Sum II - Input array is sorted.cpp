class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> umap;
        vector<int> ans;
        for(int i=0;i<numbers.size();i++){
            if(umap.find(target-numbers[i])!=umap.end()){
                ans.push_back(umap[target-numbers[i]]);
                ans.push_back(i+1);
                return ans;
            }
            umap[numbers[i]]=i+1;
        }
        return ans;
    }
};