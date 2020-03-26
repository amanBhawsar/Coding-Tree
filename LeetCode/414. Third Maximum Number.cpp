class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(s.size()<3){
            int maxi=INT_MIN;
            for(auto i:s)
                maxi=max(maxi,i);
            return maxi;
        }else{
            nums.clear();
            for(auto i:s)
                nums.push_back(i);
            nth_element(nums.begin(),nums.begin()+nums.size()-3,nums.end());
            return nums[nums.size()-3];
        }
        return -1;
    }
};