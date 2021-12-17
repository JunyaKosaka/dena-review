#include "game.hpp"

static bool check_diagonal(t_board board, int y, int x, char c) {
	int cnt = 0;
	int i = y, j = x;
	while (i >= 0 && j < X_SIZE) {
		if (board[i][j] == c) cnt++;
		else cnt = 0;
		if (cnt == 4) return 1;
		i--;
		j++;
	}
	i = y, j = x;
	cnt = 0;
	while (i < Y_SIZE && j < X_SIZE) {
		if (board[i][j] == c) cnt++;
		else cnt = 0;
		if (cnt == 4) return 1;
		i++;
		j++;
	}
	return 0;
}

bool have_finished(t_board board, int turn) {
    turn %= 2;
    char c = "ox"[turn];
    int cnt = 0;
    rep(i, Y_SIZE) {
        cnt = 0;
        rep(j, X_SIZE) {
            if (board[i][j] == c) cnt++;
            else cnt = 0;
            if (cnt == 4) return 1;
        }
    }
    rep(j, X_SIZE) {
        cnt = 0;
        rep(i, Y_SIZE) {
            if (board[i][j] == c) cnt++;
            else cnt = 0;
            if (cnt == 4) return 1;
        }
    }
    rep(i, Y_SIZE) rep(j, X_SIZE) {
        // i, jが左端
        if (i && j && i < Y_SIZE - 1) continue;
		if (check_diagonal(board, i, j, c)) return 1;
    }
    return 0;
}
