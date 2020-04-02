class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int f,n=nums.size(),ind=0;
        if(n<=1 && n>=0)
            return n;
        for (int i = 0; i < n-1; i++){
            if(nums[i+1]!=nums[i]){
                nums[ind++]=nums[i];
                f=0;
            }else{
                if(f==1){
                    continue;
                }
                nums[ind++]=nums[i];
                f++;
            }
        }
        if(nums[n-1]!=nums[ind-1]){
            nums[ind++]=nums[n-1];
        }else{
            int i=n-1,c=0;
            while(i>=0){
                if(nums[ind-1]==nums[i])
                    c++;
                i--;
                if(c>1){
                    break;
                }
            }
            if(c==2){
                nums[ind++]=nums[n-1];
            }
        }
        return ind;
    }
};