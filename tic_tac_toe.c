#include <stdio.h>
#include <stdlib.h>

char board[3][3];  // 3x3 game board

// Function declarations
void initializeBoard();
void printBoard();
int checkWin();
int isFull();

int main() {
    int player = 1;    // Player 1 starts (X)
    int row, col;
    int status = 0;    // 0 = game continues, 1 = win, -1 = draw

    initializeBoard();

    printf("\n=== TIC TAC TOE GAME ===\n");
    printf("Player 1: X\nPlayer 2: O\n");

    while (1) {
        printBoard();
        printf("Player %d, enter row and column (1-3): ", player);
        scanf("%d %d", &row, &col);

        // Validate input
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Mark the cell
        board[row - 1][col - 1] = (player == 1) ? 'X' : 'O';

        // Check for win
        if (checkWin()) {
            printBoard();
            printf("\n🎉 Player %d wins! 🎉\n", player);
            break;
        }

        // Check for draw
        if (isFull()) {
            printBoard();
            printf("\n😐 It's a draw! 😐\n");
            break;
        }

        // Switch player
        player = (player == 1) ? 2 : 1;
    }

    return 0;
}

// Initialize the board with empty spaces
void initializeBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Print the current board state
void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Check if any player has won
int checkWin() {
    for (int i = 0; i < 3; i++) {
        // Rows
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;

        // Columns
        if (board[0][i] != ' ' &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;
    }

    // Diagonals
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return 1;

    return 0;  // No win yet
}

// Check if the board is full
int isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}
