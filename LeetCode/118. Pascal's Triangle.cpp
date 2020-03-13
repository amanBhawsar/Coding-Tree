class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> row;
        vector<int> prev;
        if(numRows==0){
            return ans;
        }
        if(numRows==1){
            prev.push_back(1);
            ans.push_back(prev);
        }else{
            prev.push_back(1);
            ans.push_back(prev);
            for(int r=2;r<=numRows;r++){
                row.clear();
                row.push_back(1);
                for(int i=0;i<prev.size()-1;i++){
                    row.push_back(prev[i]+prev[i+1]);
                }
                row.push_back(1);
                ans.push_back(row);
                prev=row;
            }
        }
        return ans;
    }
};