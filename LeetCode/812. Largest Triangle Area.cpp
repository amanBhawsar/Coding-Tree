class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& p) {
        int n=p.size();
        double maxi=-1.0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    maxi=fmax(maxi,(abs(p[i][0] * (p[j][1] - p[k][1]) + p[j][0] * (p[k][1] - p[i][1]) + p[k][0] * (p[i][1] - p[j][1])))/2.0);
                }
            }
        }
        return maxi;
    }
};