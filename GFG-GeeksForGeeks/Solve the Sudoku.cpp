#include <bits/stdc++.h>
using namespace std;

bool findUnoccupiedLocation(int grid[9][9],int &row,int &column){
    for(row=0;row<9;row++){
        for(column=0;column<9;column++){
            if(grid[row][column]==0){
                return true;
            }
        }
    }
    return false;
}

bool usedInRow(int grid[9][9],int row,int num){
    for(int col=0;col<9;col++){
        if(grid[row][col] == num){
            return true;
        }
    }
    return false;
}

bool usedInCol(int grid[9][9],int col,int num){
    for(int row=0;row<9;row++){
        if(grid[row][col] == num){
            return true;
        }
    }
    return false;
}

bool usedInBox(int grid[9][9],int boxStartRow,int boxStartCol,int num){
    for(int row=0;row<3;row++)
        for(int col=0;col<3;col++)
            if(grid[row+boxStartRow][col+boxStartCol]==num)
                return true;
    return false;
}

bool isSafe(int grid[9][9],int row,int col,int num){
    return !usedInRow(grid,row,num) && !usedInCol(grid,col,num) && !usedInBox(grid,row-row%3,col-col%3,num) && grid[row][col]==0;
}

void printSudoku(int grid[9][9]){
    for(int row=0;row<9;row++)
        for(int column=0;column<9;column++)
            cout << grid[row][column] << " ";
        cout << endl;
}

bool SolveSudoku(int grid[9][9]){
    int row,col;
    if(!findUnoccupiedLocation(grid,row,col)){
        return true;
    }
    for(int num=1;num<=9;num++){
        if(isSafe(grid,row,col,num)){
            grid[row][col] = num;
            if(SolveSudoku(grid))
                return true;
            grid[row][col] = 0;
        }
    }
    return false;
}


int main(){
	int t;
	cin >> t;
	while(t--){
	    int grid[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>grid[i][j];
            }
        }
        if (SolveSudoku(grid) == true){
    	    printSudoku(grid);
        }
    	else
    		cout << "No solution exists";
	}
    return 0;
}
