#include <stdio.h>

int main() {
    char board[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 1, choice;
    char mark;

    while (1) {
        printf("player %d's turn\n", player);
        printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);

        mark = (player == 1) ? 'X' : 'O';

    
        printf("enter position");
        scanf("%d", &choice);

        // checking position is correct
        if (choice < 1 || choice > 9 || board[(choice - 1) / 3][(choice - 1) % 3] == 'X' || board[(choice - 1) / 3][(choice - 1) % 3] == 'O') {
            printf("invalid\n");
            continue;
        }
     board[(choice - 1) / 3][(choice - 1) % 3] = mark;

        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] || board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
                printf("\nPlayer %d wins!\n", player);
                return 0;
            }
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            printf("\nPlayer %d wins!\n", player);
            return 0;
        }
        player = (player == 1) ? 2 : 1;
    }

    return 0;
}

