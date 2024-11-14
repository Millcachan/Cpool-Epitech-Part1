/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** swap
*/

void my_swap(int *a, int *b)
{
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}
