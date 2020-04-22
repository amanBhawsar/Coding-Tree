class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),l=1;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=l;
            l=l*nums[i];
        }
        int r=1;
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*r;
            r=r*nums[i];
        }
        return ans;
    }
};