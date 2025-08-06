//see this

class Solution {
public:
    bool isSafeplace(vector<vector<char>> &board, int row, int col, char dig){
        //horizontal check
        for(int i=0;i<9;i++){
            if(board[row][i]==dig){
                return false;
            }
        }

        //vertical check
        for(int i=0;i<9;i++){
            if(board[i][col]==dig && i!=row){
                return false;
            }
        }

        //Grid check
        int srow=(row/3)*3;
        int scol=(col/3)*3;

        for(int i=srow; i<=srow+2;i++){
            for(int j=scol; j<=scol+2;j++){
                if(board[i][j]==dig){
                    return false;
                }
            }
        }
    
      return true;

    }


    bool helper(vector<vector<char>> &board, int row, int col){
        if(row==9){
            return true;
        }

        int nextRow = row, nextCol=col+1;
        if(nextCol==9){
            nextRow=row+1;
            nextCol=0;
        }
        if(board[row][col]!='.'){
            helper(board, nextRow, nextCol);
        }else{
            //place the digit
        for(char dig='1'; dig<='9'; dig++){
            if(isSafeplace(board, row, col, dig)){
                board[row][col]=dig;
                if(helper(board, nextRow, nextCol)){
                    return true;
                }
                board[row][col]='.';
            }

        }

        }

        
    return false;

    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }
};