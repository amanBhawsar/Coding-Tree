class Solution {
public:
    int singleNumber(vector<int>& nums) {
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
                    return nums[i];
                }
            }
        }
        return 0;
    }
};