class Solution {
public:
    void floodFill(vector<vector<char>>& grid,int i,int j){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[i].size() && grid[i][j]=='1'){
            grid[i][j]=0;
            floodFill(grid,i+1,j);
            floodFill(grid,i-1,j);
            floodFill(grid,i,j-1);
            floodFill(grid,i,j+1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    floodFill(grid,i,j);
                }
            }
        }
        return ans;
    }
};