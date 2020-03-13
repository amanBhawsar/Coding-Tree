class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int arr[nums.size()]={0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]-1]++;
        }
        ans.push_back(0);
        ans.push_back(0);
        for(int i=0;i<nums.size();i++){
            if(arr[i]==0){
                ans[1]=i+1;
            }else if(arr[i]==2){
                ans[0]=i+1;
            }
        }
        return ans;
    }
};