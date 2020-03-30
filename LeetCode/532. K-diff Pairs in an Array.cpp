class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[i]-nums[j])==k)
                    st.insert({min(nums[i],nums[j]),max(nums[i],nums[j])});
            }
        }
        return st.size();
    }
};