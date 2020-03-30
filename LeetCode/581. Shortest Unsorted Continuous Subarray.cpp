class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size(),i,j;
        for(i=0;i<n;i++)
            if(temp[i]!=nums[i])
                break;
        for(j=n-1;j>=i;j--)
            if(temp[j]!=nums[j])
                break;
        return j-i+1;
    }
};