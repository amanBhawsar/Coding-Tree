class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        int mini[r]={0};
        for(int i=0;i<r;i++){
            mini[i]=1000001;
        }
        int maxi[c]={0};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mini[i]=min(mini[i],matrix[i][j]);
            }
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                maxi[i]=max(maxi[i],matrix[j][i]);
            }
        }
        vector<int> ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==maxi[j] && matrix[i][j]==mini[i])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};