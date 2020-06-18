class Solution {
public:
     void floodFill(vector<vector<char>>& grid,int i,int j){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[i].size() && grid[i][j]=='O'){
            grid[i][j]='1';
            floodFill(grid,i+1,j);
            floodFill(grid,i-1,j);
            floodFill(grid,i,j-1);
            floodFill(grid,i,j+1);
        }
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()==0){
            return;
        }
        int n = board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                floodFill(board,i,0);
            }
            if(board[i][m-1]=='O'){
                floodFill(board,i,m-1);
            }
        }
        for(int i=0;i<m;i++){
            if(board[0][i]=='O'){
                floodFill(board,0,i);
            }
            if(board[n-1][i]=='O'){
                floodFill(board,n-1,i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='1')
                    board[i][j]='O';
            }
        }
    }
};