class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        obstacleGrid[0][0]=(obstacleGrid[0][0]+1)%2;
        for(int i=1;i<m;i++)
            if(obstacleGrid[i][0]==1 || obstacleGrid[i-1][0]==0){
                obstacleGrid[i][0]=0;
            }else
                obstacleGrid[i][0]=1;
        for(int i=1;i<n;i++)
            if(obstacleGrid[0][i]==1 || obstacleGrid[0][i-1]==0){
                obstacleGrid[0][i]=0;
            }else
                obstacleGrid[0][i]=1;
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1)
                    obstacleGrid[i][j]=0;
                else{
                    long long k = ((long)obstacleGrid[i-1][j]+(long)obstacleGrid[i][j-1]);
                    if(k>=INT_MAX){
                        obstacleGrid[i][j]=k%1000000007;
                    }else{
                        obstacleGrid[i][j]=k;
                    }
                }
            }
                
        return obstacleGrid[m-1][n-1];
    }
};