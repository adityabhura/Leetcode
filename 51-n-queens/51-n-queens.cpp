class Solution {
public:
    
    void rec(int col, vector<int>& lrow, vector<int>& upleft, vector<int>& downleft, vector<string>& board, vector<vector<string>>& ans, int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        
        for(int row=0;row<n;row++)
        {
            if(lrow[row]==0 && downleft[row+col]==0 && upleft[n-1+col-row]==0)
            {
                board[row][col]='Q';
                lrow[row]=1;
                downleft[row+col]=1;
                upleft[n-1+col-row]=1;
                rec(col+1,lrow,upleft,downleft,board,ans,n);
                board[row][col]='.';
                lrow[row]=0;
                downleft[row+col]=0;
                upleft[n-1+col-row]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        vector<int> lrow(n,0);
        vector<int> upleft(2*n-1,0);
        vector<int> downleft(2*n-1,0);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        rec(0,lrow,upleft,downleft,board,ans,n);
        return ans;
    }
};