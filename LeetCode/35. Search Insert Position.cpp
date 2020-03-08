class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0){
            return 0;
        }
        int i=0,j=nums.size()-1,mid=0;
        if(nums[i] >= target)
            return i;
        if(nums[j] < target)
            return j+1;
        while(i+1!=j){
            mid = (i+j)/2;
            if(nums[mid]>target){
                j=mid;
            }else if(nums[mid]<target){
                i=mid;
            }else{
                return mid;
            }
        }
        return i+1;
    }
};