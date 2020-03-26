class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool ans1=true,ans2=true;
        int n=nums.size(),ind=-1;
        if(n==1)
            return true;
        for(int i=0;i<=n-2;i++){
            if(nums[i]>nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){    //already valid input
            return true;
        }
        //either change i index or i+1
        int temp = nums[ind];
        nums[ind]=nums[ind+1];
        for(int i=0;i<=n-2;i++){
            if(nums[i]>nums[i+1]){
                ans1=false;
                break;
            }
        }
        nums[ind+1]=temp;
        nums[ind]=nums[ind+1];
        for(int i=0;i<=n-2;i++){
            if(nums[i]>nums[i+1]){
                ans2=false;
                break;
            }
        }
        return ans1||ans2;
    }
};