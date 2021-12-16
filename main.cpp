#include "game.hpp"

int main() {
	cout << "Welcome Four In A Row Game!" << '\n';
    vector<string> player(2);
    name_input(&player);
    t_board board = init_board();
    game(board, player);
    return 0;
}
