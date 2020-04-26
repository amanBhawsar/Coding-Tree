class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int,stack<int>> mp;
        int r=nums.size(),c;
        vector<int> ans;
        for(int i=0;i<r;i++){
            c=nums[i].size();
            for(int j=0;j<c;j++){
                mp[i+j].push(nums[i][j]);
            }
        }
        stack<int> s;
        for(auto i:mp){
            s=i.second;
            c=s.size();
            while (c--){
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};