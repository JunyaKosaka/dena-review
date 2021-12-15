#include "dena.hpp"

t_board change_board(t_board board, int row, char c) {
    for (int i = Y_SIZE - 1; i >= 0; i--) {
        if (board[i][row]  == '.') {
            board[i][row] = c;
            break;
        }
    }
    return board;
}

t_board init_board() {
    t_board board(Y_SIZE, vector<char>(X_SIZE));
    rep(i, Y_SIZE) rep(j, X_SIZE) board[i][j] = '.';
    return board;
}