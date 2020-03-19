class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]<=0){
                nums.erase(nums.begin()+i);
            }else{
                i++;
            }
        }
        nums.push_back(nums.size()+10);
        for(i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(nums[i]<nums.size()){
                    if(nums[nums[i]]>0)
                        nums[nums[i]]*=-1;
                }
            }else{
                nums[i]*=-1;
                if(nums[i]<nums.size()){
                    if(nums[nums[i]]>0)
                        nums[nums[i]]*=-1;
                }
                if(nums[i]>0)
                    nums[i]*=-1;
            }
        }
        for(i=1;i<nums.size();i++){
            if(nums[i]>0){
                return i;
            }
        }
        return i;
    }
};