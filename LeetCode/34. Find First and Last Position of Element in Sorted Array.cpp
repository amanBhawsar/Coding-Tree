class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size(),m,left=0;
        while(l<r){
            m=l+(r-l)/2;
            if(nums[m]>=target){
                r=m;
            }else{
                l=m+1;
            }
        }
        left=l,r=nums.size();
        while(l<r){
            m=l+(r-l)/2;
            if(nums[m]<=target){
                l=m+1;
            }else{
                r=m;
            }
        }
        vector<int> v(2,-1);
        if(left==r)
            return v;
        v[0]=left;
        v[1]=r-1;
        return  v;
    }
};