class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%(nums.size());
        k=-k;
        while(k<0){
            k+=nums.size();
        }
        std::rotate(nums.begin(),nums.begin()+k,nums.end());
    }
};