class Solution {
public:
    vector<vector<char>> grid;
    vector<vector<string>> ans;
    bool canPlaceQueen(int row,int col,int n){
        //col check
        for(int i=row-1;i>=0;i--){
            if(grid[i][col]=='Q') return false;
        }
        //left diog check
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(grid[i][j]=='Q') return false;
        }
        //right diog check
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(grid[i][j]=='Q') return false;
        }
        return true;
    }
    int count = 0;
    void f(int row,int n){
        if(row==n){
            count++;
        }

        for(int col=0;col<n;col++){
            if(canPlaceQueen(row,col,n)){
                grid[row][col] = 'Q';
                f(row+1,n);
                grid[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        grid.resize(n,vector<char>(n,'.'));
        f(0,n);
        return count;
    }
};
