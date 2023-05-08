#include <stdio.h>

#define ROWS 3
#define COLS 3

char matrix[ROWS][COLS] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void draw_board();
int get_input(char symbol);
char check_win();
void clear_board();

int main() {
    printf("-- Tic Tac Toe -- CSIE@GCU\n");
    printf("Player 1 (X) - Player 2 (O)\n");
    char symbol = 'X';  
    char winner = '\0'; 

    do {
        draw_board();          
        int position = get_input(symbol);  
        int row = (position - 1) / 3;
        int col = (position - 1) % 3;
        matrix[row][col] = symbol;  
        winner = check_win();
        symbol = (symbol == 'X') ? 'O' : 'X';
    } while (winner == '\0');

    draw_board();
    printf("==>Player %c wins!\n", winner)

    clear_board(); 

    return 0;
}

// 繪製遊戲矩陣
void draw_board() {
    printf("\n");
    printf("     \u25A0     \u25A0  \n");
    printf("  %c  \u25A0  %c  \u25A0  %c  \n", matrix[0][0], matrix[0][1], matrix[0][2]);
    printf("     \u25A0     \u25A0  \n");
    printf("\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\n");
    printf("     \u25A0     \u25A0  \n");
    printf("  %c  ■  %c  ■  %c  \n", matrix[1][0], matrix[1][1], matrix[1][2]);
    printf("     \u25A0     \u25A0  \n");
    printf("\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\u25A0\n");
    printf("     \u25A0     \u25A0  \n");
    printf("  %c  \u25A0  %c  \u25A0  %c  \n", matrix[2][0], matrix[2][1], matrix[2][2]);
    printf("     \u25A0     \u25A0  \n");
    printf("\n");
}

int get_input(char symbol) {
    int position = 0;
    do {
        printf("Player %c, enter a position (1-9): ", symbol);
        scanf("%d", &position);
    } while (position < 1 || position > 9 || matrix[(position-1)/3][(position-1)%3] == 'X' || matrix[(position-1)/3][(position-1)%3] == 'O');
    return position;
}

char check_win() {
    int i, j;
    char winner = '\0';
    for (i = 0; i < ROWS; i++) {
        if (matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2]) {
winner = matrix[i][0];
break;
}
}
if (winner == '\0') {
for (j = 0; j < COLS; j++) {
if (matrix[0][j] == matrix[1][j] && matrix[0][j] == matrix[2][j]) {
winner = matrix[0][j];
break;
}
}
}
if (winner == '\0') {
if (matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2]) {
winner = matrix[0][0];
} else if (matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0]) {
winner = matrix[0][2];
}
}
if (winner == '\0') {
int count = 0;
for (i = 0; i < ROWS; i++) {
for (j = 0; j < COLS; j++) {
if (matrix[i][j] == 'X' || matrix[i][j] == 'O') {
count++;
}
}
}
if (count == 9) {
winner = 'T'; // 'T' 代表 Tie
}
}
return winner;
}

void clear_board() {
int i, j;
for (i = 0; i < ROWS; i++) {
for (j = 0; j < COLS; j++) {
matrix[i][j] = (char)('0' + i * 3 + j + 1);
}
}
}
