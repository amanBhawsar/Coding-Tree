class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),c=0,sum=0;
        unordered_map<int,int> umap;
        umap[0]++;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(umap[sum-k]!=0)
                c+=umap[sum-k];            
            umap[sum]++;
        }
        return c;
    }
};