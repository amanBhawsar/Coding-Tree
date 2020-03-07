#include <vector> 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int f=0;
        for (int i = 0; i < nums.size(); i++){
            if(f==0){
                f=1;
                continue;
            }
            vector<int>::iterator it;
            it = nums.begin(); 
            if(nums[i-1]==nums[i]){
                nums.erase(it+i); 
                i--; 
            }
        }
        return nums.size();
    }
};