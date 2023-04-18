class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<map<int,bool>>cols(9);
        vector<map<int,bool>>rows(9);
        vector<map<int,bool>>boxs(9);

       
        for (int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                if (board[i][j]!='.')
                {
                    cout<<(int)((i/3)*3 + (j/3))<<endl;
                    if ( cols[i][board[i][j]] == true || rows[j][board[i][j]]==true ||
                        boxs[(int)((i/3)*3 + (j/3))] [board[i][j]]==true  )
                    { 
                        cout<<i<<" "<<j<<endl;
                        
                        return false;
                    }
                    else
                    {
                        cols[i][board[i][j]]=true;
                        rows[j][board[i][j]]=true;
                        boxs[(int)((i/3)*3 + (j/3)) ][board[i][j] ]=true;
                        
                    }
                }
            }
        }
        return true;
    }
     
    
};