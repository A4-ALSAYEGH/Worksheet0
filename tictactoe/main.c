#include <stdio.h>
#include "game.h"

int main(void) {
    char board[BOARD_SIZE];
    char player = 'X';
    int move;

    init_board(board);

    while (1) {
        print_board(board);
        printf("Player %c, enter a position (1-9): ", player);

        if (scanf("%d", &move) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (move < 1 || move > 9) {
            printf("Position must be between 1 and 9.\n");
            continue;
        }

        int idx = move - 1;
        if (board[idx] == 'X' || board[idx] == 'O') {
            printf("That spot is taken. Try again.\n");
            continue;
        }

        board[idx] = player;

        char winner = check_winner(board);
        if (winner == 'X' || winner == 'O') {
            print_board(board);
            printf("Player %c wins!\n", winner);
            break;
        }

        if (is_full(board)) {
            print_board(board);
            printf("It's a draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
