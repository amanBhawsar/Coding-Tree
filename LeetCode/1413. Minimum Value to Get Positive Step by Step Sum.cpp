class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans=INT_MAX,sum=nums[0];
        for(int i=1;i<nums.size();i++){
            ans=min(ans,sum);
            sum+=nums[i];
        }
        ans=min(ans,sum);
        if(ans>0)
            return 1;
        else
            return 1+abs(ans);
    }
};