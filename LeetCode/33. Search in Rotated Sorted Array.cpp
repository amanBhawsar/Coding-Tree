class Solution {
public:
    int bSearch(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]==target){
                return m;
            }else if(nums[m]<target){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[l]<=target && nums[m]>=target){    //sorted
                vector<int> v(nums.begin()+l, nums.begin()+m+1);
                int k =bSearch(v,target);
                if(k<0){
                    return -1;
                }
                return l+k;
            }else if(nums[m]<=target && nums[r]>=target){    //sorted
                vector<int> v(nums.begin()+m, nums.begin()+r+1);
                int k =bSearch(v,target);
                if(k<0){
                    return -1;
                }
                return m+k;
            }else{
                if(nums[l]<nums[m] || l==m){
                    l=m+1;
                }else{
                    r=m-1;
                }
            }
        }
        return -1;
    }
};