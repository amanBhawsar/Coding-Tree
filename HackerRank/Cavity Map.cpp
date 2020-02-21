vector<string> cavityMap(vector<string> grid) {
    int n=grid.size();
    vector<string> gridAns(grid);
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            int maxi=0;
            maxi=max(grid[i][j+1]-'0',grid[i+1][j]-'0');
            maxi=max(grid[i-1][j]-'0',maxi);
            maxi=max(grid[i][j-1]-'0',maxi);
            if(grid[i][j]-'0'>maxi){
                gridAns[i][j]='X';  
                cout<<maxi << " ";     
            }
        }
    }
    return gridAns;
}