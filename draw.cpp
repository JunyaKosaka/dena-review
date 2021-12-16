#include "game.hpp"

static void set_row_num() {
    cout << "\x1b[31m";
    cout << ' ';
    rep(j, X_SIZE) cout << j+1;
    cout << endl;
    cout << "\x1b[39m";
}

void draw_line() {
    cout << "---------" << '\n';
}

void draw_board(t_board board) {
    draw_line();
    rep(i, Y_SIZE) {
        cout << '|';
        rep(j, X_SIZE) cout << board[i][j];
        cout << '|';
        cout << endl;
    }
    draw_line();
    set_row_num();
}
