class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int sum=0,k=-1;
        while(--n){
            ans.push_back(k);
            sum+=k;
            k--;
        }
        sum=-sum;
        ans.push_back(sum);
        return ans;
    }
};