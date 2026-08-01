class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            set<int> row;
            for (int j=0; j<9; j++){
                if(board[i][j]=='.')
                    continue;
                else{
                    if(row.count(board[i][j])>0)
                        return 0;
                    else{
                        row.insert(board[i][j]);
                    }
                }
            }
        }
        for(int i=0; i<9; i++){
            set<int> col;
            for(int j=0; j<9; j++){
                if(board[j][i]=='.')
                    continue;
                else{
                    if(col.count(board[j][i])>0)
                        return 0;
                    else{
                        col.insert(board[j][i]);
                    }
                }
            }
        }
        for(int i=0; i<=6; i+=3){
            for(int j=0; j<=6; j+=3){
                set<int> square;
                for(int k=0; k<3; k++){
                    for(int l=0; l<3; l++){
                        if(board[i+k][j+l]=='.')
                            continue;
                        else{
                            if( square.count(board[i+k][j+l])>0)
                                return 0;
                            else{
                                square.insert(board[i+k][j+l]);
                            }
                        }

                    }
                }
            }
        }
        return 1;
    }
};
