class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];    
        }
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int sumrev=0;
        for(int i=n-1;i>=0;i--){
            sumrev+=nums[i];
            sum-=nums[i];
            ans.push_back(nums[i]);
            if(sumrev>sum)
                break;
        }
        return ans;
    }
};