class Solution {
public:
    int minMoves2(vector<int>& nums) {
        auto n = nums.begin()+nums.size()/2;
        nth_element(nums.begin(),n,nums.end());
        int median = *n,ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(median-nums[i]);
        }
        return ans;
    }
};