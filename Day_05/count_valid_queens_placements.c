/*
** EPITECH PROJECT, 2023
** count_valid_aueens_placements.c
** File description:
** count_valid_aueens_placements
*/

#include <stdbool.h>

bool is_safe(int *b, int r, int c)
{
    for (int i = 0; i < r; i++)
        if (b[i] == c || b[i] - i == c - r || b[i] + i == c + r)
            return false;
    return true;
}

int solve_n_queens(int *board, int row, int n)
{
    int count = 0;

    if (row == n)
        return 1;
    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col)) {
            board[row] = col;
            count += solve_n_queens(board, row + 1, n);
        }
    }
    return count;
}

int count_valid_queens_placements(int n)
{
    int board[n];

    return (n < 1) ? 0 : solve_n_queens(board, 0, n);
}
