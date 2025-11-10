#ifndef GAME_H
#define GAME_H

#define BOARD_SIZE 9

void init_board(char board[BOARD_SIZE]);
void print_board(const char board[BOARD_SIZE]);
char check_winner(const char board[BOARD_SIZE]);
int is_full(const char board[BOARD_SIZE]);

#endif
