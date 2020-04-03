class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int a1=coordinates[0][0],a2=coordinates[0][1],b1=coordinates[1][0],b2=coordinates[1][1],a,b,n=coordinates.size();
        a=a1-b1;//x
        b=a2-b2;//y
        for(int i=3;i<n;i++){
            if(a*(a2-coordinates[i][1])!=b*(a1-coordinates[i][0]))
                return false;
        }
        return true;
    }
};