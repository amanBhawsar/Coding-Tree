#include<bits/stdc++.h>
using namespace std;
int n;
bool isSafe(int board[100][100],int row,int col)
{
    int i,j;
    for(i=0;i<col;i++)
        if(board[row][i])
            return false;
    for(i=row,j=col;j>=0 && i>=0;i--,j--)
        if(board[i][j])
            return false;
    for(i=row,j=col;j>=0 && i<n;i++,j--)
        if(board[i][j])
            return false;
    return true;
}

void printSol(int board[100][100]){
    cout << "[";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                cout << j+1 <<" ";
            }
        }
    }
    cout << "] ";
}

bool solveNQUtil(int board[100][100],int col){
    if(col == n){
        printSol(board);
        return true;
    }
    bool res = false;
    for(int i=0;i<n;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
            res = solveNQUtil(board,col+1)||res;
            board[i][col]=0;
        }
    }
    return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
        int board[100][100];
	    cin>>n;
	    
        if(solveNQUtil(board,0)==false){
            cout << -1;
        }
        cout << endl;
    }
	return 0;
}