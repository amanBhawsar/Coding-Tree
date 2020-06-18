class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int odd=0,n=chips.size();
        for(int i=0;i<n;i++){
            if(chips[i]%2==1)
                odd++;
        }
        return min(odd,n-odd);
    }
};