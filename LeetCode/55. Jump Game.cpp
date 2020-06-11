class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),maxi=-1,f=1,ind=0;
        for(int i=0;i<n-1;){
            // cout << nums[i]<<" "; 
            if(nums[i]==0){
                f=0;
                break;
            }
            maxi=-1;
            for(int j=i+1;j<n && nums[i]!=0;j++){
                maxi=max(maxi,nums[j]+j);
                if(nums[j]+j==maxi){
                    ind=j;
                }
                nums[i]--;
            }
            i=ind;
        }
        return (f==1?true:false);
    }
};