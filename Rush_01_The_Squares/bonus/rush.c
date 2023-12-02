/*
** EPITECH PROJECT, 2023
** rush.c
** File description:
** rush
*/

void rush_generic(int n, int x, int y)
{
    if (n < 1 || n > 5) {
        write(2, "Invalid assignement's number\n", 29);
        return;
    }
    if (n == 1)
        rush1(x, y);
    if (n == 2)
        rush2(x, y);
    if (n == 3)
        rush3(x, y);
    if (n == 4)
        rush1(x, y);
    if (n == 5)
        rush5(x, y);
}
