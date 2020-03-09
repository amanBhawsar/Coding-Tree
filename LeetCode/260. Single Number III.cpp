class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i])!=umap.end())
                umap[nums[i]]=umap[nums[i]]-1;
            else
                umap[nums[i]]=2;
        }
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i])!=umap.end()){
                if(umap[nums[i]]==2){
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};