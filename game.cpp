#include "game.hpp"

static int is_invalid_num(t_board board, int row) {
    if (row < 0 || X_SIZE <= row || board[0][row] != '.') {
        cerr << "Invalid number!" << endl;
        return 1;
    }
    return 0;
}

void game(t_board board, vector<string> player) {
	int turn = 0;
	while (turn < X_SIZE * Y_SIZE) {
        char c = (turn&1) ? 'x' : 'o';
        draw_board(board);
        int input_row = user_input(player, turn);
        if (is_invalid_num(board, input_row)) continue;
        board = change_board(board, input_row, c);
        if (have_finished(board, turn)) break;
        turn++;
    }
    turn %= 2;
    if (turn < X_SIZE * Y_SIZE) cout << "player " << player[turn] << " won!" << '\n';
	else cout << "Draw!" << '\n';
    draw_board(board);
}