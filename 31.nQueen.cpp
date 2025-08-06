#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<string> &board, int r, int c, int n){ //O(n) time complexity
        //Horintal row
        for(int j=0; j<n;j++){
            if(board[r][j]=='Q') 
            return false;
        }
        //vertical row
        for(int j=0; j<n;j++){
            if(board[j][c]=='Q') 
            return false;
        }
        //left diagonal
        for(int i=r, j=c;i>=0 && j>=0; i--, j--){
             if(board[i][j]=='Q') 
             return false;
        }
        //right diagonal
        for(int i=r, j=c;i>=0 && j<n; i--, j++){
             if(board[i][j]=='Q') 
             return false;
        }
        return true;

    }
    
    void nQueens(vector<string> &board, vector<vector<string>> &ans, int row, int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(board,row, j, n )){
                board[row][j]='Q';
                nQueens(board, ans, row+1, n);
                board[row][j]='.';
            
            }
        }
        return;
    }


    void solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        vector<vector<string>> ans;
        nQueens(board,ans, 0, n );
        //return ans;
        int idx=1;
        cout<<"Possible positions are given below\n";
        for(auto i : ans){
            cout<<idx++<<endl;
            cout<<i[0]<<endl;
            cout<<i[1]<<endl;
            cout<<i[2]<<endl;
            cout<<i[3]<<endl;
        }


        
    }
    
int main() {
    // your code goes here 
    solveNQueens(4);

}
