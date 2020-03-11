class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            umap[nums[i]]+=1;
            if(umap[nums[i]]-1==n/3)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};