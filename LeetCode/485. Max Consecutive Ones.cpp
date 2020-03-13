class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr++;
            }else{
                maxi=max(maxi,curr);
                curr=0;
            }
        }
        maxi=max(maxi,curr);
        return maxi;
    }
};