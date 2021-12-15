#include "dena.hpp"

int is_invalid_num(t_board board, int row) {
    if (row < 0 || X_SIZE <= row || board[0][row] != '.') {
        cerr << "Invalid number!" << endl;
        return 1;
    }
    return 0;
}

int main() {
	cout << "Welcome Four In A Row Game!" << '\n';
    vector<string> player(2);
	player[0] = "first";
	player[1] = "second";
    name_input(&player);
    int turn = 0;
    t_board board = init_board();

    while (turn < X_SIZE * Y_SIZE) {
        draw_line();
        char c = (turn&1) ? 'x' : 'o';
        draw_board(board);
        int input_row = user_input(player, turn);
        if (is_invalid_num(board, input_row)) continue;
		cout << "26: check" << '\n';
        board = change_board(board, input_row, c);
		cout << "28: check" << '\n';
        if (have_finished(board, turn)) break;
		cout << "30: check" << '\n';
        turn++;
    }
    draw_line();
    turn %= 2;
    if (turn < X_SIZE * Y_SIZE) cout << "player " << player[turn] << " won!" << '\n';
	else cout << "Draw!" << '\n';
    draw_board(board);
    return 0;
}
