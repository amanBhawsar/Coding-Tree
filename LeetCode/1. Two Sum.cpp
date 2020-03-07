class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if (umap.find(nums[i]) == umap.end()){
                umap[nums[i]]=i+1;
            }
        }
        int f=0,val=0;
        for(int i=0;i<nums.size();i++){
            int a = umap[nums[i]],b=umap[target-nums[i]];
            if(nums[i] == target-nums[i]){
                f=1;
                val=nums[i];
                continue;
            }
            if(a&&b){
                ans.push_back(a-1);
                ans.push_back(b-1);
                break;
            }
        }
        if(f==1 && ans.size()==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==val){
                    ans.push_back(i);
                    if(f==2){
                        break;
                    }
                    f++;
                }   
            }
        }
        return ans;
    }
};