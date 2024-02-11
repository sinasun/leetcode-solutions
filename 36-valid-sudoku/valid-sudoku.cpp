class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int board_size = 9;
        // check rows
        for (int i = 0; i < board_size; ++i) {
            unordered_map<char, int> umap;
            for (int j = 0; j < board_size; ++j) {
                if (umap[board[i][j]] >= 1) {
                    return false;
                }
                if (board[i][j] != '.') {
                    umap[board[i][j]]++;
                }
            }
        }

        // check columns
        for (int i = 0; i < board_size; ++i) {
            unordered_map<char, int> umap;
            for (int j = 0; j < board_size; ++j) {
                if (umap[board[j][i]] >= 1) {
                    return false;
                }
                if (board[j][i] != '.') {
                    umap[board[j][i]]++;
                }
            }
        }

        // check squares
        for (int i = 0; i < board_size; ++i) {
            unordered_map<char, int> umap;
            for (int j = 0; j < board_size; ++j) {
                int temp = i / 3;
                int start_row = temp * 3;
                int start_column = (i % 3) * 3;
                int row = start_row + (j % 3);
                int column = start_column + j / 3;
                if (umap[board[row][column]] >= 1) {
                    
                    return false;
                }
                if (board[row][column] != '.') {
                    umap[board[row][column]]++;
                }
            }
        }
        return true;
    }
};