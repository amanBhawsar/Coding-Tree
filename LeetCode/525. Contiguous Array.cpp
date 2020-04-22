class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int count1=0;
        int maxLen=0;
        unordered_map<int,int> diff{{0,-1}};
        for(int i=0;i<nums.size();i++){
            (nums[i]==1)?count1++:count1--;
            if(diff.find(count1) != diff.end()) 
                maxLen=max(maxLen,i-diff[count1]);
            else 
                diff[count1]=i;
        }
        return maxLen;
    }
};