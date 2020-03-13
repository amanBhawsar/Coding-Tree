class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted=nums;
        vector<int> ans;
        sort(sorted.begin(),sorted.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(std::lower_bound(sorted.begin(), sorted.end(), nums[i])-sorted.begin());
        }
        return ans;
    }
};