#include <stdio.h>
#include "game.h"

void init_board(char board[BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        board[i] = '0' + (i + 1);  // '1' to '9'
    }
}

void print_board(const char board[BOARD_SIZE]) {
    printf("\n");
    printf(" %c | %c | %c\n", board[0], board[1], board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[3], board[4], board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[6], board[7], board[8]);
    printf("\n");
}

char check_winner(const char board[BOARD_SIZE]) {
    int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // cols
        {0, 4, 8}, {2, 4, 6}             // diagonals
    };

    for (int i = 0; i < 8; i++) {
        int a = wins[i][0];
        int b = wins[i][1];
        int c = wins[i][2];
        if (board[a] == board[b] && board[b] == board[c]) {
            return board[a];
        }
    }
    return ' '; // no winner
}

int is_full(const char board[BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return 0;
        }
    }
    return 1;
}
