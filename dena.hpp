#ifndef GAME_HPP
#define GAME_HPP

#include <bits/stdc++.h>
#include <unistd.h>
#include <chrono>
#include <thread>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define debug(x) cerr<<#x<<" = "<<x<<endl
using namespace std;
const int X_SIZE = 7;
const int Y_SIZE = 6;
typedef vector<vector<char> > t_board;

bool have_finished(t_board board, int turn);
int user_input(vector<string> player, int turn);
void name_input(vector<string> *player);
void draw_line();
void draw_board(t_board board);
t_board change_board(t_board board, int row, char c);
t_board init_board();

#endif  // GAME_HPP