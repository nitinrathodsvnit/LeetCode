class Solution {
public:
    
    bool CheckWord(vector<vector<char>>&board,string &word,int i,int j,int pos)
    {
        int row=board.size();
        int col=board[0].size();

        if(pos==word.length())
            return true;
        if(i<0 || i>=row || j<0 || j>=col || board[i][j]!=word[pos])
            return false;

        char curr = board[i][j];
         board[i][j]='#';


        int path1= CheckWord(board,word,i+1,j,pos+1);
        int path2 =CheckWord(board,word,i-1,j,pos+1);
        int path3= CheckWord(board,word,i,j+1,pos+1);
        int path4 =CheckWord(board,word,i,j-1,pos+1);

        board[i][j]=curr; // backtracking step 

        return path1||path2||path3||path4;

    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++)
            {
                 if(CheckWord(board,word,i,j,0))
                     return true;
            }
    }
    
    return false;
    }
};
