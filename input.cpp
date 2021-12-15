#include "game.hpp"

int user_input(vector<string> player, int turn) {
    int input_row;
    turn %= 2;
    cout << player[turn] << "'s turn" << '\n';
    cout << "Type a number: ";
    cin >> input_row;
    cout << "Your number is: " << input_row << endl;
    input_row--;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    return input_row;
}

void name_input(vector<string> *player) {
    cout << "Type a name of first player: ";
    cin >> (*player)[0];
    cout << "Type a name of second player: ";
    cin >> (*player)[1];
    if ((*player)[0] == (*player)[1]) {
        (*player)[0] = "first";
        (*player)[1] = "second";
    }
    return;
}