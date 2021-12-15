#include "game.hpp"

static void set_row_num() {
    cout << "\x1b[31m";
    rep(j, X_SIZE) cout << j+1;
    cout << endl;
    cout << "\x1b[39m";
}

void draw_board(t_board board) {
    rep(i, Y_SIZE) {
        rep(j, X_SIZE) cout << board[i][j];
        cout << endl;
    }
    set_row_num();
}

void draw_line() {
    cout << "----------" << '\n';
}