class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int i = 0; i < 9; i++) {
            bool row[9] = {false};   // static array instead of set

            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue;

                int idx = c - '1';   // convert '1'..'9' → 0..8

                if (row[idx]) return false;
                row[idx] = true;
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            bool col[9] = {false};

            for (int j = 0; j < 9; j++) {
                char c = board[j][i];
                if (c == '.') continue;

                int idx = c - '1';

                if (col[idx]) return false;
                col[idx] = true;
            }
        }

        // Check 3×3 squares
        for (int bi = 0; bi <= 6; bi += 3) {
            for (int bj = 0; bj <= 6; bj += 3) {

                bool square[9] = {false};

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {

                        char c = board[bi + i][bj + j];
                        if (c == '.') continue;

                        int idx = c - '1';

                        if (square[idx]) return false;
                        square[idx] = true;
                    }
                }
            }
        }

        return true;
    }
};