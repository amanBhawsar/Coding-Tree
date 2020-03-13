class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long int sum=0;
        int mini=2147483647;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mini=min(mini,nums[i]);
        }
        sum-=(nums.size())*mini;
        return sum;
    }
};