class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        vector<int> row;
        vector<int> prev;
        if(rowIndex==0){
            return row;
        }
        if(rowIndex==1){
            row.push_back(1);
        }else{
            prev.push_back(1);
            for(int r=2;r<=rowIndex;r++){
                row.clear();
                row.push_back(1);
                for(int i=0;i<prev.size()-1;i++){
                    row.push_back(prev[i]+prev[i+1]);
                }
                row.push_back(1);
                prev=row;
            }
        }
        return row;
    }
};