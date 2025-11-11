class Solution {
public:
    bool isValid(vector<vector<char>>& grid,int row,int col,int a){
        // row check
        for(int i=0;i<9;i++){
            if(col==i) continue;
            if(grid[row][i]-'0'==a) return false;
        }
        //col check
        for(int i=0;i<9;i++){
            if(row==i) continue;
            if(grid[i][col]-'0'==a) return false;
        }
        //grid check
        int fr = row/3*3;
        int fc = col/3*3;
        for(int i=fr;i<fr+3;i++){
            for(int j=fc;j<fc+3;j++){
                if(i==row && j==col) continue;
                if(grid[i][j]-'0'==a) return false;
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board,int row,int col){
        if(row==9) return true;
        if(col==9) return helper(board,row+1,0);
        if(board[row][col]!='.') return helper(board,row,col+1);
        for(int j=1;j<=9;j++){
            if(isValid(board,row,col,j)){
                board[row][col] = '0'+j;
                bool s = helper(board,row,col+1);
                if(s) return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};