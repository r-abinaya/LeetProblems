class Solution {
public:
    bool isSafe(int row,int col,vector<string> board,int n)
    {
        int duprow=row;
        int dupcol=col;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
            row--;
        }
        
        row=duprow;
        col=dupcol;
        
         while(row<=n-1 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
            row++;
        }
          row=duprow;
        col=dupcol;
        
       while( col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
            
        }
        return true;
        
    }
    void solve(int col,vector<string> board,vector<vector<string>> &ans, vector<int> leftRow, vector<int> upperdiagonal, vector<int> lowerdiagonal,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if( leftRow[row]!=1 &&
                upperdiagonal[col+row]!=1 &&
                lowerdiagonal[n-1+col-row]!=1){
                board[row][col]='Q';
                leftRow[row]=1;
                upperdiagonal[col+row]=1;
                lowerdiagonal[n-1+col-row]=1;
            
                solve(col+1,board,ans,leftRow,upperdiagonal,lowerdiagonal,n);
                board[row][col]='.';
                leftRow[row]=0;
                upperdiagonal[col+row]=0;
                lowerdiagonal[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<vector<string>> ans;
        vector<string> board(n);
        for(int i=0;i<n;i++)
            board[i]=s;
        vector<int> leftRow(n,0), upperdiagonal(2*n-1,0), lowerdiagonal(2*n-1,0);
        solve(0,board,ans,leftRow,upperdiagonal,lowerdiagonal,n);
        return ans;
    }
};